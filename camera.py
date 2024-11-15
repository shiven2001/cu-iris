import cv2 as cv
import time
import math
from ultralytics import YOLO
import pyiqa
import torch
import torchvision.transforms as transforms
from PIL import Image
from collections import deque
import numpy as np
from collections import defaultdict
from sort import *  # Ensure you have the SORT implementation

# GPU Acceleration
device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")

# YOLO model load
model = YOLO("facev3.pt")
tracker = Sort()
classNames = ["face", "background"]

# Initialize variables
detections = defaultdict(lambda: {'confidence': 0, 'count': 0})
confidence_increment = 0.1  # Increment per frame
decay_rate = 0.05           # Decay rate if not seen
max_confidence = 1.0        # Maximum confidence

def update_confidence(detection_id):
    # Increment confidence and count
    detections[detection_id]['count'] += 1
    detections[detection_id]['confidence'] = min(
        max_confidence,
        detections[detection_id]['confidence'] + confidence_increment
    )

def decay_confidence(detection_id):
    # Apply decay if the object is not detected
    detections[detection_id]['confidence'] = max(
        0,
        detections[detection_id]['confidence'] - decay_rate
    )

# Get video stream
def camera_stream(url):
    cap = cv.VideoCapture(url)
    cap.set(3, 640)
    cap.set(4, 480)

    # fps and iqa 
    prev_time = time.time()  # Initialize previous time for FPS calculation
    total_frames = 0  # Initialize total frame counter
    total_time = 0  # Initialize total time counter
    total_iqa_score = 0
    iqa_scores = deque(maxlen=100)
    fps_count = deque(maxlen=100)


    if not cap.isOpened():
        print("Cannot open camera")
        exit()# Operations on the frame come here
        
    while True:
        # Capture frame-by-frame
        ret, frame = cap.read()
        frame = cv.resize(frame, (640, 480))

        ## IQA Part
        iqa_metric = pyiqa.create_metric('brisque', device=device)         # Create metric with default setting
        PIL_image = Image.fromarray(cv.cvtColor(frame, cv.COLOR_BGR2RGB))         # PIL
        # Convert to tensor
        transform = transforms.Compose([
            transforms.ToTensor(),  # Converts to Float and scales to [0, 1]
        ])        
        tensor = transform(PIL_image)
        tensor = tensor.unsqueeze(0)  # Add a dimension at index 0
        score_nr = iqa_metric(tensor).item()

        total_iqa_score += score_nr
        iqa_scores.append(score_nr)  # Add the current score to the deque
        avg_iqa_score = sum(iqa_scores) / len(iqa_scores) if iqa_scores else 0

        gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)

        laplacian_var = cv.Laplacian(gray, cv.CV_64F).var()
        mean_brightness = np.mean(gray)


        ## Object Detection Part
        results = model(frame, stream=True, persist=True)
        detected_objects = get_objects(frame, model)

        ## Time Confidence Part
        # Reset confidence for objects not detected
        for detection_id in list(detections.keys()):
            decay_confidence(detection_id)

        for info in results:
            boxes = info.boxes
            for box in boxes:
                # bounding box
                x1, y1, x2, y2 = box.xyxy[0]
                x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)
                cv.rectangle(frame, (x1, y1), (x2, y2), (255, 0, 0), 2)

                # confidence
                confidence = math.ceil((box.conf[0]*100))/100

                # class name
                cls = int(box.cls[0])

                #id
                track_id = 0
                if box.is_track:
                    track_id = box.id.item()

                # A unique ID for the detected object
                detection_id = f"{cls}-{x1}-{y1}" 
                print(track_id) 

                # Update confidence based on detection
                if confidence > 0.5:  # Threshold for detection
                    update_confidence(detection_id)
                else:
                    decay_confidence(detection_id)

                # object details
                org = [x1, y1]
                font = cv.FONT_HERSHEY_SIMPLEX
                fontScale = 1
                color = (255, 0, 0)
                thickness = 2

                cv.putText(frame, f"{track_id} - {classNames[cls]} - {confidence}", org, font, fontScale, color, thickness)
                display_confidence = detections[detection_id]['confidence']

                #cv.putText(frame, f"Conf: {display_confidence:.2f}", (x1, y1 - 10),
                #        cv.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

        # Calculate FPS
        current_time = time.time()
        elapsed_time = current_time - prev_time
        fps = 1 / elapsed_time
        prev_time = current_time

        # Update total frames and total time
        total_frames += 1
        total_time += elapsed_time

        # Calculate average FPS
        avg_fps = total_frames / total_time

        # Display FPS and average FPS on the frame
        fps_text = f"FPS: {int(fps)}"
        cv.putText(frame, fps_text, (10, 30), cv.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)

        # Display IQA score
        iqa_text = f"IQA: {int(score_nr)}"

        cv.putText(frame, iqa_text, (10, 60), cv.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)

        # Display quality issue
        if laplacian_var <= 1000:
            cv.putText(frame, f"Issue: Blur", (10, 90), cv.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)
        else:
            cv.putText(frame, f"Issue: None", (10, 90), cv.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)
        
        if mean_brightness <= 50:
            cv.putText(frame, f"Issue: Low Light", (10, 120), cv.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)
        elif mean_brightness >= 150: 
            cv.putText(frame, f"Issue: Too Bright", (10, 120), cv.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)
        else:
            cv.putText(frame, f"Issue: None", (10, 120), cv.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)

        # If frame is read correctly ret is True
        if not ret:
            print("Can't receive frame, exiting ...")
            break

        ## Operations on the frame come here

        # Grayscale the frame
        #brisque_score = iqa.brisque_score(gray)
        #print(f' >> BRISQUE Score: {brisque_score}')
        cv.imshow('Webcam', frame)

        if cv.waitKey(1) == ord('q'):
            break

# When everything done, release the capture
def release_camera(cap):
    cap.release()
    cv.destroyAllWindows()


url = "http://192.168.2.9:4747/video?type=some.mjpeg"
camera_stream(url)

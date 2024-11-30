import cv2 as cv
import time
import math
from ultralytics import YOLO
import pyiqa
import torch
import torchvision.transforms as transforms
from PIL import Image
import numpy as np
from sort import Sort  # Import SORT

# GPU Acceleration
device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")

# YOLO model load
model = YOLO("facev3.pt")
tracker = Sort()
classNames = ["face", "background"]

# Initialize SORT tracker
tracker = Sort()

# Get video stream
def camera_stream(url):
    cap = cv.VideoCapture(url)
    cap.set(3, 640)
    cap.set(4, 480)

    prev_time = time.time()  # Initialize previous time for FPS calculation

    if not cap.isOpened():
        print("Cannot open camera")
        exit()# Operations on the frame come here
        
    while True:
        # Capture frame-by-frame
        ret, frame = cap.read()
        frame = cv.resize(frame, (640, 480))

        ## IQA Part
        iqa_metric = pyiqa.create_metric('brisque', device=device)
        PIL_image = Image.fromarray(cv.cvtColor(frame, cv.COLOR_BGR2RGB)) # PIL
        # Convert to tensor
        transform = transforms.Compose([
            transforms.ToTensor(),  # Converts to Float and scales to [0, 1]
        ])        
        tensor = transform(PIL_image)
        tensor = tensor.unsqueeze(0)  # Add a dimension at index 0
        score_nr = iqa_metric(tensor).item()

        # check blur and brightness
        gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
        laplacian_var = cv.Laplacian(gray, cv.CV_64F).var()
        mean_brightness = np.mean(gray)

        ## Object Detection Part
        results = model(frame, stream=True)

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

                # object details
                org = [x1, y1]
                font = cv.FONT_HERSHEY_SIMPLEX
                fontScale = 1
                color = (255, 0, 0)
                thickness = 2

                cv.putText(frame, f"{classNames[cls]} - {confidence}", org, font, fontScale, color, thickness)

        # Calculate FPS
        current_time = time.time()
        elapsed_time = current_time - prev_time
        fps = 1 / elapsed_time
        prev_time = current_time

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
        cv.imshow('Webcam', frame)

        if cv.waitKey(1) == ord('q'):
            break

# When everything done, release the capture
def release_camera(cap):
    cap.release()
    cv.destroyAllWindows()


url = "http://192.168.2.9:4747/video?type=some.mjpeg"
#camera_stream(url)
camera_stream(0)
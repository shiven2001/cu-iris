import cv2 as cv
import time
import math
from ultralytics import YOLO
import pyiqa
import torch
import torchvision.transforms as transforms
from PIL import Image
import numpy as np
from deep_sort_realtime.deepsort_tracker import DeepSort

# GPU Acceleration
device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")

# YOLO model load
model = YOLO("facev3.pt")
tracker = DeepSort(max_age=5)
classNames = ["face", "background"]

# Frame counter for tracking missed detections
frame_counter = {}

# Get video stream
def camera_stream(url):
    cap = cv.VideoCapture(0)
    #cap = cv.VideoCapture(url)
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

        # Detect objects using YOLOv8
        results = model(frame, stream=True)[0]

        # Get bounding boxes and class IDs from results
        boxes = results.boxes.xyxy.cpu().numpy()
        class_ids = results.boxes.cls.cpu().numpy().astype(int)

        tracks = tracker.update(boxes, class_ids, frame=frame)
        
        # Draw bounding boxes and track IDs
        for track in tracks:
            bbox = track.to_tlbr()
            class_id = track.class_id
            track_id = track.track_id
            cv.rectangle(frame, (int(bbox[0]), int(bbox[1])), (int(bbox[2]), int(bbox[3])), (255, 0, 0), 2)
            cv.putText(frame, f'ID: {track_id}', (int(bbox[0]), int(bbox[1]) - 10), cv.FONT_HERSHEY_SIMPLEX, 0.5, (36, 255, 12), 2)



        for info in results:
            boxes = info.boxes
            for box in boxes:
                # Bounding box coordinates
                x1, y1, x2, y2 = box.xyxy[0].int().tolist()
                confidence = box.conf[0].item()
                cls = int(box.cls[0])

                # Only add detections above a certain confidence threshold
                if confidence > 0.5:
                    detections.append([x1, y1, x2, y2, confidence])
                    cv.rectangle(frame, (x1, y1), (x2, y2), (255, 0, 0), 2)
                    org = (x1, y1)
                    font = cv.FONT_HERSHEY_SIMPLEX
                    cv.putText(frame, f"{classNames[cls]} - {confidence:.2f}", org, font, 0.5, (255, 0, 0), 2)

        # Convert detections to numpy array for SORT
        detections = np.array(detections)
        if detections.size > 0:
            # Update SORT tracker
            tracked_objects = tracker.update(detections)

            # Reset frame counters for detected objects
            for obj in tracked_objects:
                track_id = int(obj[4])  # Get the tracking ID
                frame_counter[track_id] = 0  # Reset the counter for this object

            # Draw tracked objects
            for obj in tracked_objects:
                x1, y1, x2, y2, track_id = obj
                cv.rectangle(frame, (int(x1), int(y1)), (int(x2), int(y2)), (0, 255, 0), 2)
                cv.putText(frame, f'ID: {int(track_id)}', (int(x1), int(y1) - 10), cv.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

        else:
            # Increment frame counter for tracked objects
            for track_id in list(frame_counter.keys()):
                frame_counter[track_id] += 1  # Increase the count since the object wasn't detected

                # Remove bounding boxes if they exceed the threshold
                if frame_counter[track_id] > 100:  # Threshold of 100 frames
                    del frame_counter[track_id]  # Remove the tracking ID from the counter
                    continue  # Skip drawing this object

                # If the object is still being tracked, draw the last known position
                obj = tracker.get_track(track_id)  # Implement a method in SORT to get the last known position
                if obj is not None:
                    x1, y1, x2, y2 = obj[:4]
                    cv.rectangle(frame, (int(x1), int(y1)), (int(x2), int(y2)), (0, 255, 0), 2)
                    cv.putText(frame, f'ID: {int(track_id)}', (int(x1), int(y1) - 10), cv.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
        
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
camera_stream(url)

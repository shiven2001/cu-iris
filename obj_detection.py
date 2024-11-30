import cv2
from ultralytics import YOLO
import math

# YOLO model load
model = YOLO("facev3.pt")
classNames = ["face", "background"]

def detect_object(frame):

    ## Object Detection Part
    results = model(frame, stream=True)

    for info in results:
        boxes = info.boxes
        for box in boxes:
            # bounding box
            x1, y1, x2, y2 = box.xyxy[0]
            x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)
            cv2.rectangle(frame, (x1, y1), (x2, y2), (255, 0, 0), 2)

            # confidence
            confidence = math.ceil((box.conf[0]*100))/100

            # class name
            cls = int(box.cls[0])
            print(cls)

            # object details
            org = [x1, y1]
            font = cv2.FONT_HERSHEY_SIMPLEX
            fontScale = 1
            color = (255, 0, 0)
            thickness = 2

            cv2.putText(frame, f"{classNames[cls]} - {confidence}", org, font, fontScale, color, thickness)
    
    return frame, confidence, cls


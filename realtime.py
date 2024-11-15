from ultralytics import YOLO
import cv2
import torch

# GPU Acceleration
device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")

# Load the initial YOLOv8 model
model = YOLO('facev3.pt')

# Initialize object information storage
object_info = []

# Video capture
cap = cv2.VideoCapture('./video.webm')

while True:
    ret, frame = cap.read()
    if not ret:
        break

    # Detect objects using YOLOv8
    results = model(frame)[0]

    # Store object information
    for box in results.boxes:
        x1, y1, x2, y2 = box.xyxy[0].int().tolist()
        confidence = box.conf[0].item()
        cls = int(box.cls[0])
        object_info.append((x1, y1, x2 - x1, y2 - y1, confidence, cls))

    # Check if it's time to fine-tune the model
    if len(object_info) >= 100:  # Fine-tune every 100 frames
        # Fine-tune the YOLOv8 model using the stored object information
        model.train(data=object_info, epochs=5, lr0=0.0001)

        # Clear the object information storage
        object_info = []

    # Draw bounding boxes and display the frame
    for box in results.boxes:
        x1, y1, x2, y2 = box.xyxy[0].int().tolist()
        confidence = box.conf[0].item()
        cls = int(box.cls[0])
        cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)
        cv2.putText(frame, f'{model.names[cls]} {confidence:.2f}', (x1, y1 - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (36, 255, 12), 2)

    cv2.imshow('Object Detection', frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
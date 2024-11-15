import cv2
import numpy as np
import iqa

# Main function
def main():
    cap = cv2.VideoCapture(0)
    cap.set(3, 640)
    cap.set(4, 480)
    if not cap.isOpened():
        print("Cannot open camera")
        exit()
        
    while True:
        # Capture frame-by-frame
        ret, frame = cap.read()
        frame = cv2.resize(frame, (640, 480))

        # object details
        font = cv2.FONT_HERSHEY_SIMPLEX
        fontScale = 0.5
        color = (255, 0, 0)
        thickness = 1

        contrast = str(iqa.iqa_contrast_std(frame))

        cv2.putText(frame, contrast, (10, 30), font, fontScale, color, thickness)

        # If frame is read correctly ret is True
        if not ret:
            print("Can't receive frame, exiting ...")
            break

        cv2.imshow('Webcam', frame)

        if cv2.waitKey(1) == ord('q'):
            break

    cap.release()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    main()
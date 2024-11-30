import cv2
import iqa
from obj_detection import detect_object
import doubleControl

def main():
    # Camera module url
    url = "http://192.168.1.103:4747/video?type=some.mjpeg"

    try:
        #cap = cv2.VideoCapture(url)
        cap = cv2.VideoCapture(0)
        cap.set(3, 640)
        cap.set(4, 480)
        focus = 0

        if not cap.isOpened():
            print("Cannot open camera")
            exit()

        while True:
            ret, frame = cap.read()
            frame = cv2.resize(frame, (640, 480))
            frame = cv2.flip(frame, 0)

            ## IQA
            blur = iqa.iqa_blur_laplacian(frame)
            if blur == 1:
                # Refocus
                #cap.set(cv2.CAP_PROP_FOCUS, focus)
                cap.set(cv2.CAP_PROP_AUTOFOCUS, 1)
                # Stop Robot Movement (actually it should be reducing the speed not stopping)
                doubleControl.stop()
            
            brightness = iqa.iqa_brightness_mean(frame)
            if brightness == 1:
                # Low light so turn on flash
                print(brightness)
            elif brightness == 2: 
                # Very bright
                print(brightness)
            
            contrast = iqa.iqa_contrast_std(frame)
            if contrast == 1:
                # Low contrast
                print(brightness)
            elif contrast == 2: 
                # High contrast
                print(brightness)

            ## Object Detection
            frame, confidence, cls = detect_object(frame)

            # Low confidence (threshold is 80%)
            if confidence < 0.80:
                print(confidence)

            # If frame is read correctly ret is True
            if not ret:
                print("Can't receive frame, exiting ...")
                break

            ## Operations on the frame come here
            cv2.imshow('Webcam', frame)

            if cv2.waitKey(1) == ord('q'):
                break

        cap.release()
        cv2.destroyAllWindows()

    except KeyboardInterrupt:
        # Stop the robot on exit
        doubleControl.cleanup()
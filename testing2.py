import cv2
import iqa
import cv2
import numpy as np
import iqa

# Main function
def test():
    frame = cv2.imread("moire.jpg")
    iqa.analyze_shadowing(frame)
    cv2.imshow('Webcam', frame)
    cv2.waitKey(1)

test()
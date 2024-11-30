# Python code to read image
import cv2
from obj_detection import detect_object

# To read image from disk, we use
# cv2.imread function, in below method,
img = cv2.imread("./testImages/images22.jpg", cv2.IMREAD_COLOR)
img = cv2.resize(img, (640, 480))

img = detect_object(img)
# Creating GUI window to display an image on screen
# first Parameter is windows title (should be in string format)
# Second Parameter is image array
cv2.imshow("image", img)

cv2.waitKey(0)
cv2.destroyAllWindows()

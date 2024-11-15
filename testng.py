from ultralytics import YOLO

# Load a model
model = YOLO("best.pt")  # pretrained YOLO11n model

# Run batched inference on a list of images
results = model(["ss.jpg"])  # return a list of Results objects

# Process results list
for result in results:
    boxes = result.boxes  # Boxes object for bounding box outputs
    masks = result.masks  # Masks object for segmentation masks outputs
    keypoints = result.keypoints  # Keypoints object for pose outputs
    probs = result.probs  # Probs object for classification outputs
    obb = result.obb  # Oriented boxes object for OBB outputs
    result.show()  # display to screen
    result.save(filename="result.jpg")  # save to disk

import cv2 as cv
import numpy as np
from PIL import Image

def analyze_image_blur(frame):
    # Convert to grayscale for analysis
    gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
    # Check for blur using the Laplacian variance method
    laplacian_var = cv.Laplacian(gray, cv.CV_64F).var()
    blur_threshold = 100  # Adjust this threshold based on empirical results

    if laplacian_var < blur_threshold:
        return "Blur detected"




img = cv.imread("try5.jpeg", cv.IMREAD_GRAYSCALE)

laplacian_var = cv.Laplacian(img, cv.CV_64F).var()

print(laplacian_var)

import pyiqa
import torch
import cv2 as cv
import torchvision.transforms as transforms
from PIL import Image

# list all available metrics
#print(pyiqa.list_models())

device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")

# create metric with default setting
iqa_metric = pyiqa.create_metric('brisque', device=device)
# Note that gradient propagation is disabled by default. set as_loss=True to enable it as a loss function.
iqa_loss = pyiqa.create_metric('brisque', device=device, as_loss=True)

# create metric with custom setting
#iqa_metric = pyiqa.create_metric('psnr', test_y_channel=True, color_space='ycbcr').to(device)

# check if lower better or higher better
#print(iqa_metric.lower_better) #true for brisque

# Needed if you use OpenCV, By default, it use BGR instead RGB
#image = cv.imread('try.jpg',0)
#image_gray = cv.cvtColor(image, cv.COLOR_BGR2RGB)
# Resize image to match with input model
#image_resize = cv.resize(image_gray, (32, 32))
# PIL 
PIL_image = Image.open('try2.jpg')
PIL_image_resize = PIL_image.resize((640, 640), Image.Resampling.LANCZOS)
#conver to tensor
transform = transforms.Compose([
    transforms.ToTensor(),  # Converts to Float and scales to [0, 1]
])
tensor = transform(PIL_image_resize)
tensor = tensor.unsqueeze(0)        # Add a dimension at index 0
# The function cv2.imshow() is used to display an image in a window.
#cv.imshow('img', image_resize)
print(tensor.shape)


# example for iqa score inference
# Tensor inputs, img_tensor_x/y: (N, 3, H, W), RGB, 0 ~ 1
#score_fr = iqa_metric(img_tensor_x, img_tensor_y)
score_nr = iqa_metric(tensor).item()
print(score_nr)


# img path as inputs.
#score_fr = iqa_metric('./ResultsCalibra/dist_dir/I03.bmp', './ResultsCalibra/ref_dir/I03.bmp')

# For FID metric, use directory or precomputed statistics as inputs
# refer to clean-fid for more details: https://github.com/GaParmar/clean-fid
#fid_metric = pyiqa.create_metric('fid')
#score = fid_metric('./ResultsCalibra/dist_dir/', './ResultsCalibra/ref_dir')
#score = fid_metric('./ResultsCalibra/dist_dir/', dataset_name="FFHQ", dataset_res=1024, dataset_split="trainval70k")

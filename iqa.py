import cv2
import pyiqa
import torch
import torchvision.transforms as transforms
from PIL import Image
import numpy as np
import matplotlib.pyplot as plt

# GPU Acceleration
device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")

def iqa_blur_laplacian(frame):
    laplacian_var = cv2.Laplacian(frame, cv2.CV_64F).var()
    if laplacian_var <= 1000:
        # Blur
        return 1
    else:
        # No blur
        return 0
       
def iqa_brightness_mean(frame):
    mean_brightness = np.mean(frame)
    if mean_brightness <= 50:
        # Low light
        return 1
    elif mean_brightness >= 150: 
        # Very bright
        return 2
    else:
        return 0

def iqa_contrast_std(frame):
    std_deviation = np.std(frame)
    if std_deviation <= 30:
        # Low contrast
        return 1
    elif std_deviation >= 100: 
        # High contrast
        return 2
    else:
        return 0

def iqa_color_dis(frame):
    mean_b = np.mean(frame[:, :, 0])
    mean_g = np.mean(frame[:, :, 1])
    mean_r = np.mean(frame[:, :, 2])
    avg_mean = (mean_b + mean_g + mean_r) / 3
    wb_error = np.sqrt((mean_b - avg_mean) ** 2 + (mean_g - avg_mean) ** 2 + (mean_r - avg_mean) ** 2)
    if wb_error >= 20:
        # Color distortion
        return 1
    else:
        return 0

def iqa_noise_median(frame):
    median_filtered = cv2.medianBlur(frame, 5)
    noise_estimate = np.abs(frame - median_filtered)
    noise_level = np.mean(noise_estimate)
    if noise_level >= 100:
        # Noisy
        return 1
    else:
        return 0

def iqa_vignetting_dcorner(frame):
    gray_image = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    center = (gray_image.shape[1] // 2, gray_image.shape[0] // 2)
    corners = {
        "Top Left": gray_image[0:50, 0:50],
        "Top Right": gray_image[0:50, -50:],
        "Bottom Left": gray_image[-50:, 0:50],
        "Bottom Right": gray_image[-50:, -50:]
    }
    corner_intensities = {key: np.mean(corner) for key, corner in corners.items()}
    #center_intensity = gray_image[center]
    # Note the order: (y, x)
    center_intensity = gray_image[center[1], center[0]] 

    # Check corners 
    top_left = corner_intensities['Top Left']
    bottom_left = corner_intensities['Bottom Left']
    top_right = corner_intensities['Top Right']
    bottom_right = corner_intensities['Bottom Right']

    # Check egdes
    left_similarity = abs(top_left - bottom_left)
    right_similarity = abs(top_right - bottom_right)
    top_similarity = abs(top_left - top_right)
    bottom_similarity = abs(bottom_left - bottom_right)

    # Left edge
    if left_similarity < 30:  # Adjust threshold if necessary
        if top_left < center_intensity and bottom_left < center_intensity:
            print("Dark Vignetting on Left")
        elif top_left > center_intensity and bottom_left > center_intensity:
            print("Bright Vignetting on Left")

    # Right edge
    if right_similarity < 30:  # Adjust threshold if necessary
        if top_right < center_intensity and bottom_right < center_intensity:
            print("Dark Vignetting on Right")
        elif top_right > center_intensity and bottom_right > center_intensity:
            print("Bright Vignetting on Right")

    # Check top corners (Top Left and Top Right)
    if top_similarity < 30:  # Adjust threshold if necessary
        if top_left < center_intensity and top_right < center_intensity:
            print("Dark Vignetting on Top")
        elif top_left > center_intensity and top_right > center_intensity:
            print("Bright Vignetting on Top")

    # Check bottom corners (Bottom Left and Bottom Right)
    if bottom_similarity < 30:  # Adjust threshold if necessary
        if bottom_left < center_intensity and bottom_right < center_intensity:
            print("Dark Vignetting on Bottom")
        elif bottom_left > center_intensity and bottom_right > center_intensity:
            print("Bright Vignetting on Bottom")

def iqa_pixelation_blocky(frame):
    blockiness = np.mean(np.abs(frame - cv2.blur(frame, (5, 5))) + np.abs(frame - cv2.medianBlur(frame, 5)))
    if blockiness >= 100:
        # Pixilated
        return 1
    else:
        return 0
    
def iqa_moire(frame):
    gray_image = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    # 1. Frequency Analysis using Fourier Transform
    f = np.fft.fft2(gray_image)
    fshift = np.fft.fftshift(f)
    magnitude_spectrum = 20 * np.log(np.abs(fshift) + 1)

    plt.figure(figsize=(12, 6))
    plt.subplot(1, 2, 1)
    plt.title('Original Image')
    plt.imshow(gray_image, cmap='gray')

    plt.subplot(1, 2, 2)
    plt.title('Magnitude Spectrum')
    plt.imshow(magnitude_spectrum, cmap='gray')
    plt.show()

    # 2. Edge Density Measurement
    edges = cv2.Canny(gray_image, 100, 200)
    edge_density = np.sum(edges) / (edges.shape[0] * edges.shape[1])
    print(f"Edge Density: {edge_density:.4f}")

def analyze_shadowing(frame):
    # Convert to grayscale
    gray_image = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # 1. Shadow Detection using gradient analysis
    gradients_x = cv2.Sobel(gray_image, cv2.CV_64F, 1, 0, ksize=5)
    gradients_y = cv2.Sobel(gray_image, cv2.CV_64F, 0, 1, ksize=5)
    gradient_magnitude = np.sqrt(gradients_x**2 + gradients_y**2)

    plt.figure(figsize=(8, 4))
    plt.title('Gradient Magnitude')
    plt.imshow(gradient_magnitude, cmap='gray')
    plt.show()

    # 2. Brightness Analysis
    shadow_area = gray_image[0:50, 0:50]  # Example shadow area
    non_shadow_area = gray_image[50:100, 50:100]  # Example non-shadow area
    avg_shadow_brightness = np.mean(shadow_area)
    avg_non_shadow_brightness = np.mean(non_shadow_area)
    print(f"Average Shadow Brightness: {avg_shadow_brightness:.2f}")
    print(f"Average Non-Shadow Brightness: {avg_non_shadow_brightness:.2f}")

def analyze_lighting_flare(frame):
    # Convert to grayscale
    gray_image = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # 1. Intensity Analysis
    peak_intensity = np.max(gray_image)
    print(f"Peak Intensity: {peak_intensity:.2f}")

    # 2. Edge Detection
    edges = cv2.Canny(gray_image, 100, 200)
    
    plt.figure(figsize=(8, 4))
    plt.title('Detected Edges')
    plt.imshow(edges, cmap='gray')
    plt.show()


#


def iqa_brisque(frame):
    iqa_metric = pyiqa.create_metric('brisque', device=device)         
    PIL_image = Image.fromarray(cv2.cvtColor(frame, cv2.COLOR_BGR2RGB))     
    # Convert to tensor to float and scales to [0, 1]
    transform = transforms.Compose([
        transforms.ToTensor(),  
    ])        
    tensor = transform(PIL_image)
    # Add a dimension at index 0
    tensor = tensor.unsqueeze(0) 
    score_nr = iqa_metric(tensor).item()
    if score_nr < 50 and score_nr >= 0:
        # Bad
        return 1
    else: 
        return 0
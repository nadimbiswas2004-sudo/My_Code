from PIL import Image
import numpy as np
img = Image.open('/run/media/nadim/New Volume/Digital Image Prossecing Lab/Assignment 1/resized_image.jpeg')
img_array = np.array(img)
print("Array Shape:", img_array.shape)
print("\nPixel Array Data:")
print(img_array)

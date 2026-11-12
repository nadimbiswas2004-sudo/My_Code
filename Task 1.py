import numpy as np
from PIL import Image

arr = np.array([
   [0,   50, 100, 150],
    [30,  80, 130, 180],
    [60, 110, 160, 210],
    [90, 140, 190, 255]
], dtype=np.uint8)

img = Image.fromarray(arr)
img = img.resize((240, 240), Image.NEAREST)
img.show()
#img.save('/run/media/nadim/New Volume/Digital Image Prossecing Lab/resized_image.jpeg')
new_arr = np.array(img)

print("Original Array:")
print(arr)

print("\nArray from Image:")
print(new_arr)
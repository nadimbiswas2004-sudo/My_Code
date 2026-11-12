import numpy as np
from PIL import Image

rgb_img = Image.open("/home/nadim/Pictures/car.jpeg").convert("RGB")
img_array = np.array(rgb_img)

R = img_array[:, :, 0]
G = img_array[:, :, 1]
B = img_array[:, :, 2]

gray_array = 0.2 * R + 0.5 * G + 0.1 * B
gray_array = gray_array.astype(np.uint8)

gray_img = Image.fromarray(gray_array)
gray_img.show()
#gray_img.save("/home/nadim/Pictures/car_gray_image.jpg")

print("Task 1 complete: Saved car_gray_image.jpg")
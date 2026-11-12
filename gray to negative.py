import numpy as np
from PIL import Image

gray_img = Image.open("/home/nadim/Pictures/car_gray_image.jpg")
gray_array = np.array(gray_img)

negative_array = 255 - gray_array
negative_array = negative_array.astype(np.uint8)

negative_img = Image.fromarray(negative_array)
negative_img.show()
#negative_img.save("/home/nadim/Pictures/Negative_image.jpg")

print("Task 2 complete: Saved Negative_image.jpg")
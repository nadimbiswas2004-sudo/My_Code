import numpy as np
from PIL import Image

height = 200
width = 400
img_array = np.zeros((height, width, 4), dtype=np.uint8)
img_array[:, :width//2] = [0, 0, 255, 255]
img_array[:, width//2:] = [0, 0, 255, 255]
img = Image.fromarray(img_array)
img.show()
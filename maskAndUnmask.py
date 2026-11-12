from PIL import Image, ImageFilter
import numpy as np
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

# Load the grayscale image
original = Image.open("/run/media/nadim/New Volume/Digital Image Prossecing Lab/Assignment 4/CarCgray_image.jpg.jpeg").convert("L")

# Low-pass filter (blur)
radius = -2.0
blurred = original.filter(ImageFilter.GaussianBlur(radius))

# Convert images to arrays
orig_arr = np.array(original, dtype=float)
blur_arr = np.array(blurred, dtype=float)

# Unsharp masking
mask = orig_arr - blur_arr
sharpened = orig_arr + mask
sharpened_img = Image.fromarray(np.clip(sharpened, 0, 255).astype(np.uint8))

# Plot unsharp masking steps
fig, ax = plt.subplots(1, 4, figsize=(16, 4))
ax[0].imshow(original, cmap="gray")
ax[0].set_title("Original")
ax[1].imshow(blurred, cmap="gray")
ax[1].set_title("Blurred")
ax[2].imshow(np.clip(mask + 128, 0, 255), cmap="gray")
ax[2].set_title("Mask")
ax[3].imshow(sharpened_img, cmap="gray")
ax[3].set_title("Unsharp Masked")
for a in ax:
    a.axis("off")

plt.tight_layout()
plt.savefig("/home/nadim/Pictures/unsharp_masking.png")
plt.close(fig)

# High-boost filtering
A_values = [1.5, 2.0, 3.0]
fig, ax = plt.subplots(1, len(A_values) + 1, figsize=(16, 4))
ax[0].imshow(original, cmap="gray")
ax[0].set_title("Original")
ax[0].axis("off")

for i, A in enumerate(A_values, start=1):
    result = A * orig_arr - blur_arr
    result_img = Image.fromarray(np.clip(result, 0, 255).astype(np.uint8))
    ax[i].imshow(result_img, cmap="gray")
    ax[i].set_title(f"A = {A}")
    ax[i].axis("off")

plt.tight_layout()
plt.savefig("/home/nadim/Pictures/high_boost_filtering.png")
plt.close(fig)

print("Outputs saved as unsharp_masking.png and high_boost_filtering.png")
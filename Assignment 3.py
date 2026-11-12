from PIL import Image
import numpy as np
import matplotlib.pyplot as plt

image_path = "/home/nadim/Pictures/car.jpeg"

img = Image.open(image_path)
gray_img = img.convert("L")
gray_array = np.array(gray_img)

rows, cols = gray_array.shape
total_pixels = rows * cols


def calculate_histogram(image_array):
    histogram = np.zeros(256, dtype=int)
    for row in image_array:
        for pixel_value in row:
            histogram[pixel_value] += 1
    return histogram


histogram = calculate_histogram(gray_array)


def calculate_pdf(histogram, total_pixels):
    pdf = histogram / total_pixels
    return pdf


pdf = calculate_pdf(histogram, total_pixels)

print("PDF values (first 10 intensity levels):")
for i in range(10):
    print(f"Intensity {i}: PDF = {pdf[i]:.6f}")


def calculate_cdf(pdf):
    cdf = np.zeros(256)
    running_sum = 0.0
    for i in range(256):
        running_sum += pdf[i]
        cdf[i] = running_sum
    return cdf


cdf = calculate_cdf(pdf)


def equalize_image(image_array, cdf):
    mapping = np.round(cdf * 255).astype(np.uint8)

    equalized_array = np.zeros_like(image_array)
    for r in range(image_array.shape[0]):
        for c in range(image_array.shape[1]):
            old_value = image_array[r, c]
            equalized_array[r, c] = mapping[old_value]

    return equalized_array


equalized_array = equalize_image(gray_array, cdf)
equalized_img = Image.fromarray(equalized_array)

equalized_histogram = calculate_histogram(equalized_array)

plt.figure(figsize=(14, 8))

plt.subplot(2, 3, 1)
plt.imshow(gray_array, cmap="gray")
plt.title("Original Grayscale Image")
plt.axis("off")

plt.subplot(2, 3, 2)
plt.bar(range(256), histogram, color="gray")
plt.title("Original Histogram")
plt.xlabel("Intensity Level")
plt.ylabel("Frequency")

plt.subplot(2, 3, 3)
plt.plot(range(256), pdf, color="blue")
plt.title("PDF of Original Image")
plt.xlabel("Intensity Level")
plt.ylabel("Probability")

plt.subplot(2, 3, 4)
plt.plot(range(256), cdf, color="green")
plt.title("CDF of Original Image")
plt.xlabel("Intensity Level")
plt.ylabel("Cumulative Probability")

plt.subplot(2, 3, 5)
plt.imshow(equalized_array, cmap="gray")
plt.title("Histogram-Equalized Image")
plt.axis("off")

plt.subplot(2, 3, 6)
plt.bar(range(256), equalized_histogram, color="darkorange")
plt.title("Equalized Histogram")
plt.xlabel("Intensity Level")
plt.ylabel("Frequency")

plt.tight_layout()
plt.savefig("histogram_equalization_result.png", dpi=150)
plt.show()

equalized_img.save("equalized_image.jpg")
equalized_img.show()
print("\nDone. Results saved as 'histogram_equalization_result.png' and 'equalized_image.jpg'")
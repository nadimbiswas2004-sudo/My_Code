from PIL import Image

# Load RGB image
img = Image.open("carC.png").convert("RGB")

# Create dictionary
images = {
    "original": img
}

# Get image size
width, height = img.size

# Create grayscale image
gray_img = Image.new("L", (width, height))

# Convert RGB to grayscale
for y in range(height):
    for x in range(width):

        r, g, b = img.getpixel((x, y))

        gray = int(0.299 * r + 0.587 * g + 0.114 * b)

        gray_img.putpixel((x, y), gray)

# Store grayscale image in dictionary
images["grayscale"] = gray_img

# Save grayscale image
gray_img.save("CarCgray_image.jpg")

# Display grayscale image
gray_img.show()

print("Task 1 completed.")
print("Grayscale image saved as CarCgray_image.jpg")
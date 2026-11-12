from PIL import Image

# Load grayscale image
gray_img = Image.open("/home/nadim/Pictures/CarCgray_image.jpg").convert("L")

# Create dictionary
images = {
    "grayscale": gray_img
}

# Get image size
width, height = gray_img.size

# Create negative image
negative_img = Image.new("L", (width, height))

# Convert grayscale to negative
for y in range(height):
    for x in range(width):

        gray = gray_img.getpixel((x, y))

        negative = 255 - gray

        negative_img.putpixel((x, y), negative)

# Store negative image in dictionary
images["negative"] = negative_img

# Save negative image
negative_img.save("CarCnegative_image.jpg")

# Display negative image
negative_img.show()

print("Task 2 completed.")
print("Negative image saved as CarCnegative_image.jpg")
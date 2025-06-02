from PIL import Image
import IPython.display as display

# Load and display the image manually to ensure it's shown in the notebook
image_path = "/mnt/data/A_flat-style_digital_illustration_depicts_three_da.png"
img = Image.open(image_path)
display.display(img)
import cv2
import numpy as np
import matplotlib.pyplot as plt

# load the image
image = cv2.imread("open-CV/man_portrait.jpeg")

# Function to display an image
def display(text:str, img):
    cv2.imshow(text, img)
    cv2.waitKey(0) # Show image until a key is pressed

# display original image
display('Man Portrait', image)

# Convert the image to grayscale
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
display('Man Portrait Gray', gray)

# Basic Image Processing Techniques
kernel = np.ones((3,3), np.uint8)
erosion = cv2.erode(image, kernel, iterations = 1)
dilation = cv2.dilate(image, kernel, iterations = 1)
opening = cv2.morphologyEx(image, cv2.MORPH_OPEN, kernel)
closing = cv2.morphologyEx(image, cv2.MORPH_CLOSE, kernel)

display('Erosion', erosion)
display('Dilation', dilation)
display('Opening', opening)
display('Closing', closing)

# Edge detection
edges = cv2.Canny(image, 100, 200)
display('Edges', edges)

# Thresholding
ret, thresh = cv2.threshold(gray, 127, 255, 0)
display('Threshold', thresh)

# Contours
contours, hierarchy = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
print("Number of contours = " + str(len(contours)))
print(contours[0])

# Draw all contours
image = cv2.drawContours(image, contours, -1, (0,255,0), 3)
display('Contours', image)

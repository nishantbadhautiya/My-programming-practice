import cv2
source = '3_image_resizer/building.jpeg'
destination = "3_image_resizer/new_image.png"
img = cv2.imread(source, cv2.IMREAD_COLOR) # Load the image 
print(img.shape)
scale_percent = 20
new_height = int(img.shape[0] * scale_percent / 100)
new_width = int(img.shape[1] * scale_percent / 100)

new_img = cv2.resize(img, (new_width, new_height))
cv2.imshow("Image Project", new_img)
cv2.imwrite(destination, new_img)
cv2.waitKey(0)
cv2.destroyAllWindows()

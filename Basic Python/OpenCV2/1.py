import cv2

#color = 1
#greyscale, b/w = 0

img = cv2.imread("abc.jpg",1)
print(img.shape)
print(type(img))

img_1 = cv2.imread("abc.jpg",0)
print(img.shape)
print(type(img))

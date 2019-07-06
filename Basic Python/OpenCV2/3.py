#resize img
import cv2

img = cv2.imread("abc.jpg")

resized = cv2.resize(img, (500,300))

cv2.imshow("Legend",resized)

cv2.waitKey(2000)

cv2.destroyAllWindows()

#resize img
import cv2

img = cv2.imread("abc.jpg")

resized = cv2.resize(img, (int(img.shape[1]*2), int(img.shape[0]*2)))

cv2.imshow("Legend",resized)

cv2.waitKey(2000)

cv2.destroyAllWindows()

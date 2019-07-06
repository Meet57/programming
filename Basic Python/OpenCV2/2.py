import cv2

img = cv2.imread("abc.jpg")

cv2.imshow("Legend",img)

cv2.waitKey(2000)
#if wait key is 0 it will wait till user waitKey
#other wise it is in a millisecond

cv2.destroyAllWindows()

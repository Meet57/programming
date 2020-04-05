import cv2

cap = cv2.VideoCapture('http://192.168.8.101:8080/video')

while True:
    status, photo = cap.read()
    cv2.imshow("Meet",photo)
    if cv2.waitKey(1) == 27:
        break

cv2.destroyAllWindows()
cap.release()
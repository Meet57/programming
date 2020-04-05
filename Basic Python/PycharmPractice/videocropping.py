import cv2

cap = cv2.VideoCapture(0)

while True:
    status, photo = cap.read()
    newPhoto = photo[100:300,200:400]
    cv2.imshow("Meet",newPhoto)
    if cv2.waitKey(1) == 27:
        break

print(photo.shape)
cv2.destroyAllWindows()
cap.release()

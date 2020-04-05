#VideoCapture

import cv2

cap = cv2.VideoCapture(0)

while True:
    status, photo = cap.read()
    cv2.imshow("Meet",photo)
    if cv2.waitKey(1) == 27:
        break

cv2.destroyAllWindows()
cap.release()

'''
Today's learning:
->Basic of Linux
->Basic commands of linux
->Basic commands of python3
->About visualization
->discussed about projects related to corona virus
->explored anaconda
->learnt to make a similar program just like cheese
->learnt how to capture video and photo with python and cv2
'''
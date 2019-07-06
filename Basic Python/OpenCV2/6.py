#on webcam on live mode
import cv2,time

video = cv2.VideoCapture(0)

check, frame = video.read()
#check = it is a bool datatype,returns true on vidoe on mode
#frame = numpy array, represents the first image that video capture

print(check)
print(frame)

time.sleep(3)
video.release()
cv2.destroyAllWindows()

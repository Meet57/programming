import winsound

frequency = 3000
duration = 50

for i in range(6):
    for j in range(i):
        winsound.Beep(3000, 1000)

    winsound.Beep(2000, 1000)

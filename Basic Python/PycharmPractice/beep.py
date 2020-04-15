import winsound

for i in range(6):
    for j in range(i):
        winsound.Beep(3000, 1000)

    winsound.Beep(2000, 1000)

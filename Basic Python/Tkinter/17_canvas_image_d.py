from tkinter import *

root = Tk()

canvas = Canvas(root, width=200,height=200)
canvas.pack()

photo = PhotoImage(file='C:\\Users\\Maten57\\Pictures\\SpotBright\\aaa.jpg')
canvas.crete_image(0,0, image=photo , anchor=NW)

root.minsize(300,300)
root.mainloop()

from tkinter import *

root = Tk()

canvas = Canvas(root,width=300,height=300)
canvas.pack()

points = [100,100,100,150,150,100,170,170]
canvas.create_polygon(points)

root.minsize(300,300)
root.mainloop()

from tkinter import *

root = Tk()

canvas = Canvas(root, width=200,height=200,bg="grey")
canvas.pack()

canvas.create_arc(100,100,200,200,extent=120)

#entext referes to angle in canvas arc

root.minsize(300,300)
root.mainloop()

from tkinter import *

root = Tk()
canvas = Canvas(root, width=200, height=200, bg="grey")
canvas.pack()

line = canvas.create_line(0,0,200,100,fill="blue")
redline = canvas.create_line(200,100,0,200,fill="red")

root.minsize(400,400)
root.mainloop()

from tkinter import *

root = Tk()
canvas = Canvas(root, width=300, height=300, bg="grey")
canvas.pack()

canvas.create_rectangle(100,100,200,200,fill ="yellow",outline="red")

root.minsize(400,400)
root.mainloop()

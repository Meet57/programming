from tkinter import *


def rightclick(event):
    print('right')
def leftclick(xyz):
    print('left')
def middleclick(event):
    print('middle')

root = Tk()
root.title("Maten57")

root.minsize(200,100)

button=Button(root,text='click')

button.bind("<Button-1>",leftclick)
button.bind("<Button-3>",rightclick)
button.bind("<Button-2>",middleclick)
button.pack(fill=X)

root.mainloop()

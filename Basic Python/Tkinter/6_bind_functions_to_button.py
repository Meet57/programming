from tkinter import *

def callme():
    print("Hello World")

def mouse(click):
    print('mouse clicked')

root = Tk()

a = Button(root, text="callme", command=callme, bg='black', fg='green')
a.pack(fill=X)

root.minsize(300,300)
root.resizable(0,0)

b= Button(root, text=('mouse'))
b.bind("<Button-1>",mouse)
b.pack()

root.mainloop()

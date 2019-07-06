from tkinter import *

root = Tk( )

#this is used to fix the size of gui
lb = Label(root,text='hello ! world')
lb.pack()

#root is a GUI variable, you can use anything instead of that
root.title("A simple application")
root.minsize(300,300)
root.resizable(0,0)


root.mainloop( )

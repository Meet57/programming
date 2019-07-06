from tkinter import *

root = Tk()

#root is a GUI variable, you can use anything instead of that
root.title("A simple application")
root.minsize(300,300)

#this is used to fix the size of gui
l = Label(root,text='hello ! world')
l.pack()

root.mainloop( )

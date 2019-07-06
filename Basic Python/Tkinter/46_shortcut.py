from tkinter import *
from tkinter import messagebox

def call_me(event='meet'):
    messagebox.showinfo("trying","it's successful")

root = Tk()

root.bind('<Control-c>',call_me)

button = Button(root,text="callme",command=call_me)
button.pack()

root.minsize(300,300)
root.mainloop()

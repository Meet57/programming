from tkinter import *

def open_window():
    top = Toplevel()
    label = Label(top,text="hello, meet")
    label.pack()
    top.title('New frame')
    top.minsize(200,200)
    button1 =Button(top,text='quit',command=top.destroy)
    button1.pack()

root = Tk()

button = Button(root,text='open_window',command=open_window)
button.pack()

root.minsize(300,300)
root.mainloop()

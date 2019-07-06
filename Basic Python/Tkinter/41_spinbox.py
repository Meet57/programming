from tkinter import *

def get_me():
    print(spin1.get())

root = Tk()

spin1 = Spinbox(root,from_=0,to=5)
spin1.pack()

button =Button(root,text='Spin Value',command=get_me)
button.pack()

root.minsize(300,300)
root.mainloop()

from tkinter import *
from tkinter import colorchooser

def colour():
    clr = colorchooser.askcolor(title="background colour:")
    print(clr[1])
    print(clr)
    box.config(background=clr[1])

def colour1():
    clr = colorchooser.askcolor(title="text colou:")
    print(clr[1])
    print(clr)
    box.config(fg=clr[1])


root = Tk()

button = Button(root,text='bg Colour',command=colour)
button.pack()

button1 = Button(root,text='txt Colour',command=colour1)
button1.pack()

box = Text(root,height=10,width=30,wrap=WORD)
box.pack()

root.minsize(300,300)
root.mainloop()

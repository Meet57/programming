from tkinter import *

def clickme():
    print(i.get())

root = Tk()

i = StringVar(None)
r1 = Radiobutton(root,text='Male',variable = i,value='Male')
r2 = Radiobutton(root,text='Female',variable = i,value='Female')

r1.pack()
r2.pack()

button = Button(root, text="submit",command=clickme)
button.pack()

root.minsize(300,300)
root.mainloop()

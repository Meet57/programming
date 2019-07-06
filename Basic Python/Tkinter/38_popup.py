from tkinter import *
from tkinter import simpledialog

def get_me():
    s = simpledialog.askstring("Ask","Enter your name:")
    t = str(simpledialog.askfloat("Ask","Enter your weight:"))
    u = str(simpledialog.askinteger("Ask","Enter your age:"))
    info = ('Name:\t' + s + '\nWeight:\t' + t + '\nAge:\t' + u)
    text.insert(INSERT,info)

root = Tk()

button = Button(root,text="PopUp",command=get_me)
button.pack()

text = Text(root, wrap=WORD, height=10,width=30)
text.pack(side=BOTTOM)

root.minsize(300,300)
root.mainloop()

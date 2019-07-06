from tkinter import *
from tkinter import filedialog

def save_file():
    f = filedialog.asksaveasfile(mode='w',defaultextension=".txt")
    value = box.get(1.0,END)
    print(value)
    f.write(value)
    f.close()

root = Tk()

topframe = Frame(root)
bottomframe = Frame(root)

scroll = Scrollbar(topframe)
scroll.pack(side=RIGHT,fill=Y)

box = Text(topframe,height=10,width=30,wrap=WORD,yscrollcommand=scroll.set )
box.pack()

scroll.config(command=box.yview)

button = Button(bottomframe,text='Save as',command=save_file)
button.pack(side=TOP)

topframe.pack(side=TOP)
bottomframe.pack()
root.minsize(300,300)
root.mainloop()

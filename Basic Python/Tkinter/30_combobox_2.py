from tkinter import *
from tkinter.ttk import Combobox

def printme():
    value = combo.get()
    value1 = combo1.get()

    print(value)
    print(value1)

root = Tk()
v = ['c','c++','python','java','HTML']
u = list(range(1,33))

#if you add a attr in Combobox height it will show row and width will represent as pixel
combo = Combobox(root, value=v)
combo.set("select")
combo.pack()

combo1 = Combobox(root, value=u)
combo1.set("numbers")
combo1.pack()

button = Button(root,text="Print",command=printme)
button.pack()

root.minsize(300,300)
root.mainloop()

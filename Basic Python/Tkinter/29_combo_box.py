from tkinter import *
from tkinter.ttk import Combobox

root = Tk()
v = ['c','c++','python','java','HTML']
u = list(range(1,33))

#if you add a attr in Combobox of height it will show row and width will represent as pixel
combo = Combobox(root, value=v)
combo.set("select")
combo.pack()

combo1 = Combobox(root, value=u)
combo1.set("numbers")
combo1.pack()

#button = Button(root,text="submit",command=printme)
root.minsize(300,300)
root.mainloop()

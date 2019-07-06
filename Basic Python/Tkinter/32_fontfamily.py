from tkinter import *
from tkinter import font
from tkinter.ttk import Combobox

root = Tk()

fonts = list(font.families())

combo = Combobox(root,value=fonts)
combo.pack()

root.minsize(300,300)
root.mainloop()

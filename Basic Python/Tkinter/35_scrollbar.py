from tkinter import *
from tkinter import font

root = Tk()

frame = Frame(root)

fonts = list(font.families())

scroll = Scrollbar(frame)
scroll.pack(side=RIGHT,fill=Y)

listbox = Listbox(frame, yscrollcommand = scroll.set)
listbox.pack(side=LEFT)

for i in fonts:
    listbox.insert(END,str(i))

scroll.config(command=listbox.yview)
#always config is below the text area
frame.pack()

root.minsize(300,300)
root.mainloop()

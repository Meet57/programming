from tkinter import *

root = Tk()

frame = LabelFrame(root,text="Input",padx=55,pady=20)
entry = Entry(frame)
frame.pack()
entry.pack()

root.minsize(300,300)
root.mainloop()

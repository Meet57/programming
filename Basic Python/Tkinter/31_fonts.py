from tkinter import *
from tkinter.font import Font

root = Tk()

my_font = Font(size=16, family="algerian",weight="bold",slant="italic",underline=1,overstrike=1)
#here weight is the option where you can make text bold

text = Label(root,text="Meet Patel",font = my_font)
text.pack()

root.minsize(300,300)
root.mainloop()

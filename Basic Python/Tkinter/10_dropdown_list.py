from tkinter import *

def do_nothing():
    print("OK ok")

root = Tk()
root.minsize(300,300)

M = Menu(root)
root.config(menu=M) #this will add M in the frame

F = Menu(M)
M.add_cascade(label = "file", menu = F)
#THE further options can be sent to M as it  it a class menu to the root
F.add_command(label="New Project", command=do_nothing)
F.add_command(label="Edit Project", command=do_nothing)
F.add_separator()
#this will add a line in bw the options in the menu
F.add_command(label="Save as", command=do_nothing)

E = Menu(M)
M.add_cascade(label = "Edit", menu = E)

H = Menu(root)
M.add_cascade(label = "Help", menu = H)
#we can also put a menu option direct to root

root.mainloop()

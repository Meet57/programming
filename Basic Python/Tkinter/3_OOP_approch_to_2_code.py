from tkinter import *

class Example3():
    def __init__ (self, master):
        master.title("Meet Patel")
        self.lbl = Label(master, text="Press the button below to exit")
        self.lbl.pack()
        self.btn = Button(master, text="Quit", command=master.quit)
        self.btn.pack()

root = Tk( )
root.minsize(300,300)
root.resizable(0,0)
ex3 = Example3(root)
root.mainloop( )

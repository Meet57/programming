from tkinter import *
from tkinter import messagebox

def call_me():
    answer = messagebox.askquestion("Exit","Do you really want to exit ?")
    if  answer == 'yes':
        root.quit()

root = Tk()

b =  Button(root, text="Exit ?", command=call_me, fg="green", bg ="black")
b.pack(side = RIGHT,fill = Y)

root.minsize(300,300)
root.mainloop()

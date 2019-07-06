from tkinter import *
from tkinter import messagebox

def call_me():
    answer = messagebox.askyesnocancel("Exit","Do you really want to exit ?")
    print(answer)
    if answer == True:
        root.quit()

def call():
    answer = messagebox.askretrycancel("Exit","Do you really want to exit ?")
    print(answer)
    if answer == True:
        root.quit()

def me():
    answer = messagebox.askokcancel("Exit","Do you really want to exit ?")
    print(answer)
    if answer == True:
        root.quit()

root = Tk()

b =  Button(root, text="Exit ? yesnocancel", command=call_me, fg="green", bg ="black")
b.pack(side = RIGHT,fill = Y)

e =  Button(root, text="Exit ? retrycancel", command=call, fg="green", bg ="black")
e.pack(side = LEFT,fill = Y)

q =  Button(root, text="Exit ? okcancel", command=me, fg="green", bg ="Yellow")
q.pack(side = BOTTOM,fill = X)

root.minsize(300,300)
root.mainloop()

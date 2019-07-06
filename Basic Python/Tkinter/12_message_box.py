from tkinter import *
from tkinter import messagebox

def error():
    messagebox.showerror("delete","Are you sure ?")
def call_me():
    messagebox.showinfo("Success","installation complete")
def warning():
    messagebox.showwarning("hello !","What are you doing ?")

root = Tk()

b =Button(root, text="msg",command=call_me)
b.pack(fill=X)

c = Button(root, text="error", command=error)
c.pack(fill=X)

d = Button(root, text="warning", command=warning)
d.pack(fill=X)

root.minsize(300,300)
root.mainloop()

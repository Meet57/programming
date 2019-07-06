from tkinter import *

def click_me():
    s = entry.get()
    if(s == "Meet"):
        print('success')
    else :
        print("fail")
root = Tk()

entry = Entry(root)
entry.pack()

button = Button(root,text="click",command= click_me)
button.pack()

root.minsize(300,300)
root.mainloop()

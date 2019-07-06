from tkinter import *

def click_me():
    s1 = s.get()
    print(s1)

root = Tk()

s = StringVar()

entry = Entry(root,textvariable = s)
s.set('iti')
entry.pack()

button = Button(root,text="click",command=click_me)
button.place(x=250,y=250)

root.minsize(300,300)
root.mainloop()

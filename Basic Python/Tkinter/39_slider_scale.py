from tkinter import *

def get_me():
    print(s.get())

root = Tk()

s = Scale(root, from_=0, to=100, orient=VERTICAL, width=30)
s.set(57)

#defaultlength is 100
s.pack(side=BOTTOM,fill=Y)

button =Button(root,text='age',command=get_me)
button.pack()

root.minsize(300,300)
root.mainloop()

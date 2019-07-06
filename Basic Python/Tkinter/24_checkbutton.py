from tkinter import *

def click_me():
    print(i.get())

root = Tk()

i =  IntVar()
#you can use StringVar here insted of IntVar

c = Checkbutton(root, text="Item 1",variable=i)
c.pack()

button =  Button(root, text="click me", command=click_me)
button.pack()

root.minsize(300,300)
root.mainloop()

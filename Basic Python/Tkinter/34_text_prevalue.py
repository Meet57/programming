from tkinter import *

def print_me():
    result = text.get(1.0,END)
    print(result)

def print_me1():
    result = text.selection_get()
    print(result)

def position():
    result = text.selection_get()
    pos = text.search(result,0.0,stopindex=END)
    print(pos)

def clearme():
    text.delete(1.0,END)

root = Tk()

text = Text(root,width=20,height=8,padx=10,pady=10,wrap=WORD)
text.pack()

text.insert(INSERT,"Hello ! I am Meet Patel. I study in LDRP-ITR")

button=Button(root,text="print",command=print_me,width=20)
button.pack()

button1=Button(root,text=" selection print",command=print_me1,width=20)
button1.pack()

button2=Button(root,text="position",command=position,width=20)
button2.pack()

button3=Button(root,text="clear",command=clearme,width=20)
button3.pack()

root.minsize(300,300)
root.mainloop()

from tkinter import *

def printme():
    clickeditems = i.curselection()
    for item in clickeditems:
        print(item)

def valueme():
    clickeditems = i.curselection()
    for item in clickeditems:
        print(i.get(item))

def deleteme():
    clickeditems = i.curselection()
    for item in clickeditems:
        print(i.delete(item))

root = Tk()

i = Listbox(root,width=30,height=6, selectmode=MULTIPLE)

i.insert(1,'C')
i.insert(2,'C++')
i.insert(3,'python')
i.insert(4,'Java')
i.insert(5,'HTML')

i.pack()

button = Button(root,text='Print',command=printme)
button.pack(fill=X)
Value = Button(root,text='value',command=valueme)
Value.pack(fill=X)
delete = Button(root,text='delete',command=deleteme)
delete.pack(fill=X)
root.minsize(300,300)
root.mainloop()

from tkinter import *

root = Tk()

i = Listbox(root,width=30,height=6, selectmode=MULTIPLE)

#modes are SINGLE BROWSE MULTIPLE EXTENDED

i.insert(1,'C')
i.insert(2,'C++')
i.insert(3,'python')
i.insert(4,'Java')
i.insert(5,'HTML')

i.pack()

root.minsize(300,300)
root.mainloop()

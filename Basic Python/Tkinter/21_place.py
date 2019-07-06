from tkinter import *
root = Tk()

label1 = Label(root,text="Meet")
label3 = Label(root,text="Nrendra")
label2 = Label(root,text="Patel")

label1.place(x=10,y=100)
label3.pack()
label2.place(x=200,y=200)

root.minsize(300,300)
root.mainloop()

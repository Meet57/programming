from tkinter import *

root = Tk()
root.title('Maten57')
root.minsize(200,100)
x = Label(root, text = "Name:",bg = "yellow" , fg='black')
y = Label(root, text = "Last name:",bg = "green" , fg='black')
z = Label(root, text = "Gender", bg='white', fg='black')

i = Entry(root)
j = Entry(root)

c = Checkbutton(root, text='Male')
e = Checkbutton(root, text='Female')
l = Checkbutton(root, text='keep me logged in')

x.grid(row=0,column=0, sticky = W)
i.grid(row=0,column=1)

y.grid(row=2,column=0)
j.grid(row=2,column=1)

z.grid(row=3,column=0)
c.grid(row=3,column=1)
e.grid(row=3,column=2)

l.grid(columnspan=3)

root.mainloop()

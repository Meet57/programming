from tkinter import *

root = Tk()

one = Label(root, text='meet', fg = 'yellow',bg = 'red')
two = Label(root, text='patel', fg = 'black',bg = 'yellow')
three = Button(root, text='narendra', fg = 'green',bg = 'black')

root.minsize(300,300)
root.resizable(0,0)
one.pack(side = LEFT,fill = Y)
two.pack(fil=X, side=BOTTOM)
three.pack(side = LEFT,fill=Y)

root.mainloop()

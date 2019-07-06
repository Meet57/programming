from tkinter import *
from tkinter import filedialog

def openfile():
    result = filedialog.askopenfile(title="My file",filetype=(("text file",".txt"),("all files",".*")))
    print(result)
    text.delete(1.0,END)
    for c in result:
        text.insert(INSERT,c)


root = Tk()

button = Button(root, text='open file', command = openfile)
button.pack()

text = Text(root, wrap=WORD)
text.pack()

root.minsize(300,300)
root.mainloop()

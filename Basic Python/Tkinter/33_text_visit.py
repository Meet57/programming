from tkinter import *

root = Tk()

string = "Adani Group is an Indian multinational conglomerate headquartered in Ahmedabad, Gujarat, India. It was founded by Gautam Adani in 1988 as a commodity trading business with the flagship company Adani Enterprises Limited"

text = Text(root,width=20,height=10,wrap=WORD,padx=20,pady=40,bg="yellow",bd=10,selectbackground="red")
text.insert(INSERT,string)
text.pack()

root.minsize(300,300)
root.mainloop()

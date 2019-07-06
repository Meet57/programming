from tkinter import *

root = Tk()
root.title("Search")

top_frame = Frame(root)
bottom_frame = Frame(root)

#top_frame
entry = Entry(top_frame,width=50)
entry.pack(fill=X)

button = Button(top_frame,text="Search",bg="grey",fg="black")
button.pack(side=RIGHT)
#bottom_frame
scroll = Scrollbar(bottom_frame)
scroll.pack(side =RIGHT,fill=Y)


answer = Text(bottom_frame,width=30,height=10, yscrollcommand = scroll.set)
scroll.config(command=answer.yview)
answer.pack()


top_frame.pack(side =TOP,fill=X)
bottom_frame.pack(side=BOTTOM)
#root.minsize(300,300)
root.mainloop()

from tkinter import *
import wikipedia

def get_me():
    entry_value = entry.get()
    answer.delete(1.0,END)
    try:
        answer_value = wikipedia.summary(entry_value)
        answer.insert(INSERT,answer_value)
    except:
        answer.insert(INSERT,"check input OR internet connection")

root = Tk()
root.title("Search")

top_frame = Frame(root)
bottom_frame = Frame(root)

#top_frame
entry = Entry(top_frame,width=30)
entry.pack()

button = Button(top_frame,text="Search",bg="grey",fg="black",command=get_me)
button.pack(side=RIGHT)
#bottom_frame
scroll = Scrollbar(bottom_frame)
scroll.pack(side =RIGHT,fill=Y)


answer = Text(bottom_frame,width=30,height=10, yscrollcommand = scroll.set,wrap=WORD)
scroll.config(command=answer.yview)
answer.pack()

top_frame.pack(side =TOP)
bottom_frame.pack(side=BOTTOM)

root.title("WikiPedia")
root.mainloop()

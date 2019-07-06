from tkinter import  *

class myButton:
    def __init__(self,master):
        self.button = Button(master, text="Print", command=self.printMessage)
        self.button.pack(side=LEFT)

        self.quit = Button(master, text="exit", command=master.quit)
        self.quit.pack(side=RIGHT)

    def printMessage(self):
        print("the button is clicked")

root = Tk()
root.minsize(300,300)

b = myButton(root)


root.mainloop()

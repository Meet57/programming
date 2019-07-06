#add_cascade will add a class option to the file
#add_command will add option to the class option
from tkinter import *
from tkinter import messagebox

def do_nothing():
    print("Ok ok !!!")
def call_me():
    answer = messagebox.askquestion("Exit","do you really want to exit ?")
    if  answer == 'yes':
        root.quit()

root = Tk()
root.minsize(300,300)

#create main menu
main_menu = Menu(root)
root.config(menu=main_menu)

#decalaration of menu items
file_menu = Menu(main_menu)
edit_menu = Menu(main_menu)
exit_menu = Menu(main_menu)

#adding menu to frame(root)
main_menu.add_cascade(label="file",menu=file_menu)
main_menu.add_cascade(label="edit",menu=edit_menu)

#adding variables to file menu
file_menu.add_command(label="New Project", command=do_nothing)
file_menu.add_command(label="Edit Project", command=do_nothing)
file_menu.add_separator()

save_menu = Menu(file_menu)

file_menu.add_cascade(label="save",menu=save_menu)
save_menu.add_command(label="save as",command=do_nothing)
save_menu.add_command(label="save here",command=do_nothing)

exit = Button(root, text="Exit", command=call_me)
exit.pack(side =BOTTOM , fill=X)

root.mainloop()

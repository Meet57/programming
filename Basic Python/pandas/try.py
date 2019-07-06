import pandas as pd

name_list = ['a','b','c']
num_list = [1,2,3]

contact = {'Name:':name_list,'num_list:':num_list}

save_dict = pd.DataFrame(contact)
save_dict.to_excel('Meet.xlsx')

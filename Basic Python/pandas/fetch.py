import pandas as pd

df = pd.read_excel('Meet.xlsx')

list1 = []
list1 = list(df['num_list:'])

print(list1)

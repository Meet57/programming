import pandas as pd

def sp():
    print("\n\n")

my_list = [10,20,30]

my_list = pd.Series(data=my_list,index=['R','B','G'])

print(my_list)

sp()

my_list = pd.DataFrame(data=my_list,index=['R','B','G'])

print(my_list)

sp()

d = {'a':1,'b':2}
d = pd.Series(d)
print(d)
d = pd.DataFrame(d)
print(d)

sp()

tab = pd.Series([1,2,3,4],[5,6,7,8])
#values,index
print(tab)

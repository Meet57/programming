x = {'iti':[75,150],'meet':[200,170],1:[2,3]}

print(x)
del x['iti']
print(x)

n = ['meet','pia','janki','falgun','dhruv','iti']
r = [1,2,3,4,5]
g = ['M','F','F','M','M']
classs = {'Name':n,'Roll No':r}

print(classs['Name'][4])
print('____________________')

print(classs)
classs['gender'] = g
print(classs)
print('____________________')

t = (str(classs))
print(t)
print(type(t))

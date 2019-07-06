a = list()

b = [0,1,2,4,5,6,7,8,5]

c = 5

c = b.count(c)
print('----------------',c)

b.insert(3,3)
print(b)

a = ['meet','pia','dhurv','janki','iti','meet']
a.append('falgun')
print(a[0:-2])

print(a[4])

#a.remove(a[4])
a.remove('iti')

print(a)

print(len(b))
print(len(a))

print(max(a))
print(min(a))

print(a.count('meet'))

print('-----------add a list to another list-------------\n\n')
fruits = ['apple', 'banana', 'cherry']

points = (1, 4, 5, 9)

fruits.extend(points)

print(fruits)

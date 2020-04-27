#Write a python program which covers all the methods (functions) of list.

lis = [1,2,3,4,5,6]

lis.append(7)
lis.insert(0,1)
lis.remove(7)
print(lis.pop())

lis2 = [6,7,8,9]
lis.extend(lis2)

print(lis)

lis.sort()
lis2 = lis.copy()
lis.clear()

print(lis2)
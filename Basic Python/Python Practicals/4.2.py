#Write a Python program to append a list to the second list.

l1 = [1,2,3,4,5,6]
l2 = [7,8,9,10]

# [l1.append(i) for i in l2]

l1.extend(l2)

print(l1)
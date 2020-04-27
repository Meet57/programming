# Write a Python program to get the largest number from a list.

l = [1,2,3,4,5,6,7,8,9]

max = l[0]
for i in l:
    if i>max:
        max = i

print(max)
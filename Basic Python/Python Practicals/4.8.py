#Write a Python program to find the second smallest number in a list.

l = [12,23,45,98,12,567,13,563,213,87,23,98]

sh = sorted(l)[-2]

print(sh," is smallest in : ",l)
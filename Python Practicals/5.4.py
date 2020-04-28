# write a Python program to print the numbers of a specified list after removing even numbers from it.

l = [21,23,32,34,43,45,54,56,65,67,76,78,87,89,98]
l = [x for x in l if x%2!=0]
print(l)
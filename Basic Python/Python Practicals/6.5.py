# Write a python program to find maximum from a list using reduce.

import functools

a = [2,45,78,23,56,89,12,111]

max = functools.reduce(lambda a,b: a if a>b else b,a)

print(max)
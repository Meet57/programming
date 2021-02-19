# Write a python program to make sum of particular range using reduce

import functools

def sum(a,b):
    return a+b

n = 10

print(functools.reduce(sum,list(range(n))))
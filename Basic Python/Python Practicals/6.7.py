# Write a python program to apply two functions (square and cube) simultaneously on a specific range using map.

def func(n):
    return {n:[n**2,n**3]}

n = 10

a = list(map(func,range(10)))

print(a)
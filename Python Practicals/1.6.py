#1.6 Write a Python program to find sum of n natural numbers without loop.

def sum(n):
    if n == 1:
        return 1
    else:
        return n + sum(n-1)

print(sum(10))
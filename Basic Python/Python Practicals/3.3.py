#3.3 Write a Python program to find N!.

n = int(input("Enter Number : "))

p = 1
while n!=0:
    p *= n
    n = n - 1

print(p)
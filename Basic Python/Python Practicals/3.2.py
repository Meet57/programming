#3.2 WAP to find sum of N scanned numbers.

n = int(input("enter values you want to insert : "))

sum = 0
for i in range(n):
    sum = sum + int(input("Enter Number : "))

print(sum)


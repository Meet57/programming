#3.1 WAP to find sum of first N numbers.

n = int(input("Enter Number : "))

sum = 0
while n!=0:
    sum += n
    n = n - 1

print(sum)
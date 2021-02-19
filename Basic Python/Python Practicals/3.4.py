#3.4 Write a Python program to print Fibonacci series upto n terms.

n = int(input("Enter Number : "))

i = 0
j = 1
for l in range(n):
    k = i + j
    print(i)

    i,j = j,k 
    


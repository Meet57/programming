#3.7 WAP to print all even numbers between 1 to n except the numbers divisible by 6.

n = int(input("Enter number : "))

for i in range(1,n+1):
    if i%6 == 0:
        continue
    else:
        print(i)

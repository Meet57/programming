#3.6 WAP to check whether entered number is prime or not.

n = int(input("Enter Number : "))

prime = 0
for i in range(1,int(n/2)):
    if n%i == 0:
        prime += 1

if prime == 1 :
    print("Prime") 
else:
    print("Not prime")
#Write a python program to print list of prime numbers upto N using loop and else clause.

import math as m

def prime(n):
    for i in range(2,m.ceil(n/2)):
        if n%i == 0:
            return False
    
    return True


n = int(input("Range : "))

l = []
for i in range(1,n):
    if prime(i):
        l.append(i)
else:
    print(l)

# Write a program to find the prime numbers in a specific range using filter.

def prime(n):
    for i in range(2,int(n/2 + 1)):
        if n%i == 0:
            return False
    
    return True

a = list(filter(prime,range(100,201)))

print(a)
# Write a python program to find Armstrong number in a specific range using map.

def Armstrong(n):
    temp = n
    sum = 0
    order = len(str(n))

    while temp>0:
        digit = int(temp%10)
        sum += digit**order
        temp = int(temp/10)

    if sum == n:
        return n

a = 10
b = 100000

d = list(map(Armstrong,range(a,b)))

c = list(filter(lambda x:x != None,d))

print(c)

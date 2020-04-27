# Write a python program to check whether the given list is palindrome or not.

import math as m

def palindrome(li):
    n = m.floor(len(li) /2)
    for i in range(n):
        if li[i] != li[-(i+1)]:
            return False

    return True

li = [1,2,3,4,6,5,7,5,6,4,3,2,1]

print(palindrome(li))
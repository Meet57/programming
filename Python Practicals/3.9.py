#3.9 Write a python program to check whether given number is Palindrome or not.

x = input("Enter Number : ")
w = "" 
for i in x: 
    w = i + w 

if (x==w): 
    print("YES")     
else:
    print("No")
	

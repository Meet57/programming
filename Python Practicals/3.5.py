#3.5 WAP to find the reverse of given numbers (Example 2564-4652).

n = int(input("Enter Number : "))

rev = 0
  
while(n > 0): 
    a = int(n % 10)
    rev = int(rev * 10 + a) 
    n = int(n / 10)

print(rev)
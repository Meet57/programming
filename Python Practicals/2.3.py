#2.3 WAP to find roots of quadratic equations if roots are real.

print("Ax^2 + Bx + C")
a = int(input("A : "))
b = int(input("B : "))
c = int(input("C : "))

real = lambda a,b,c : b*b - 4*a*c

if(real(a,b,c)>=0):
    print("Real root exists")
else:
    print("No real root exists")


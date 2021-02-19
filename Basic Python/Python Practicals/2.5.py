#2.5 WAP to find maximum of three numbers (nested if-else).

a = int(input("A : "))
b = int(input("B : "))
c = int(input("C : "))

if a > b:
    if a > c:
        print("Max : ",a)
    else:
        print("Max : ",c)
else:
    print("Max : ",b)
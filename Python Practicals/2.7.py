#2.7 WAP to check whether entered input is character, digit or special symbol using ladder if-else.

c = input("Enter Anything : ")[:1]

if(c>="a" and c<="z") or (c>="A" and c<="Z"):
    print("Character")
elif(c>='0' and c<='9'):
    print("Digit")
else:
    print("Symbol")
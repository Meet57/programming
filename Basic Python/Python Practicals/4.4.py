#Write a python program to store strings in list and then print them.

n = int(input("How many string you wanna enter : "))

l = []
for i in range(n):
    s = str(i+1) + " : "
    string = input(s)

    l.append(string)

print("-----OUTPUT----")
for i in l:
    print(i)
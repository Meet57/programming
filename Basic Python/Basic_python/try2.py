lt = list()
n = int(input("how many numbers you want to insert : "))

for i in range(n):
    s = "Enter Element " + str(i) + " : "
    a = int(input(s))
    lt.append(a)

print(lt)

# Write a Python program to transpose a given matrix.

x = [[12,7,3],
     [4,5,6],
     [7,8,9]]

y = []

for i in range(len(x[0])):
    temp = []
    for j in range(len(x)):
        temp.append(x[j][i])
    y.append(temp)

print("Normal Matrix")
for i in x:
    print(i)
print("\n\nTransposed Matrix")
for i in y:
    print(i)
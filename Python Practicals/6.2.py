# Write a program to transpose a matrix using list comprehension.

x = [[12,7,3],
     [4,5,6],
     [7,8,9]]

y = [[x[i][j] for i in range(len(x))] for j in range(len(x[0]))]

for i in x:
    print(i)
print("\n\n")
for i in y:
    print(i)
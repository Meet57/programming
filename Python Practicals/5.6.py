# Write a Python program to transpose a given matrix.

import copy

x = [[12,7,3],
     [4,5,6],
     [7,8,9]]

y = copy.deepcopy(x)

for i in range(len(x[0])):
    for j in range(len(x)):
        y[i][j] = x[j][i]

for i in x:
    print(i)
print("\n\n")
for i in y:
    print(i)
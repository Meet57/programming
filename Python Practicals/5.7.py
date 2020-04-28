# Flatten a nested list structure.
# Example: if list1 = [1, [2, 3], [4, 5, [6, 7] ] ] then try to convert it in 1-dimensional [1, 2, 3, 4, 5, 6, 7]

l = [1, [2, 3], [4, 5, [6, 7] ] ]
n = []

def Flatten(l):
    for i in l:
        if type(i) == list:
            Flatten(i)
        else:
            n.append(i)

Flatten(l)
print(n)


# Write a Python program to remove duplicates from a list.

def remove_duplicates(l):
    temp = []
    for i in l:
        if i not in temp:
            temp.append(i)

    return temp


l = [1,2,3,4,5,6,7,8,9,1,3,6,8]

l = remove_duplicates(l)

print(l)

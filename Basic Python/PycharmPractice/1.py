def firstDuplicate(a):
    for i in range(len(a) - 1):
        if a[i] in a[i + 1:]:
            return a[i]

    return -1


a = [8, 4, 6, 2, 6, 4, 7, 9, 5, 8]
print(firstDuplicate(a))

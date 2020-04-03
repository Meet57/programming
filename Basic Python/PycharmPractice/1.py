a = [-1, 150, 190, 170, -1, -1, 160, 180]

n = len(a)

for i in range(n):
    if a[i] == -1:
        continue
    else:
        for j in range(i + 1, n):
            if a[j] == -1:
                continue
            else:
                if a[i] > a[j]:
                    temp = a[i]
                    a[i] = a[j]
                    a[j] = temp

print(a)

def alternatingSort(a):
    if len(a) > 3:
        b = []
        if len(a) > 3:
            pos = 0
            neg = -1
            for i in range(len(a)):
                if i % 2 == 0:
                    b.append(a[pos])
                    pos = pos + 1
                else:
                    b.append(a[neg])
                    neg = neg - 1

            print(a)
            print(b)

            for i in range(1, len(b)):
                if b[i - 1] > b[i]:
                    return False
                else:
                    continue

            return True

        else:
            return True

    else:
        return True

a = [-92, -23, 0, 45, 89, 96, 99, 95, 89, 41, -17, -48]
print(alternatingSort(a))
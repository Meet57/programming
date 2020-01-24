# fibonacci dynamic programmming

def fibonacci(n):
    f =[]
    f.append(0)
    f.append(1)
    for i in range(n+1)[2:]:
        f.append(f[i-1]+f[i-2])

    return f[-1]


print(fibonacci(9))

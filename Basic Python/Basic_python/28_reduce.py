import functools

def sum(a,b):
    return a+b

n = 10

print(functools.reduce(sum,list(range(n))))

a = [2,45,78,23,56,89,12,111]

max = functools.reduce(lambda a,b: a if a>b else b,a)

print(max)
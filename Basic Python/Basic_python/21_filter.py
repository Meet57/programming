seq1 = [1,2,3,4,5,6,7,8,9,0]

def fun(a):
    if a%4==1:
        return True
    else:
        return False

result1 = list(filter(fun,seq1))
result2 = list(filter(lambda x : x%4==2,seq1))

print(result1,result2)
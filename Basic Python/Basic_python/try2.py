def removeMusic(L):
    final = []
    common = 'music'
    for i in L:
        if common in i:
            final.append(i)

    return final

A = ['musiclove','musicvibe','event','motivation','musiclife']

F = removeMusic(A);
print(F)

fname = "romeo.txt"
fh = open(fname)
lst = list()
for line in fh:
    tl = line.rstrip().split()
    for x in tl:
        if x not in lst:
            lst.append(x)
lst.sort()
print(lst)

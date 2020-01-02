def asd(l):
    qwe = set(l[0])
    for i in l[1:]:
        qwe = qwe & set(i)

    return qwe

l = ["amisdaf","zicvmxa","qmwiear","yuaiom","hjaiklm"]

tyu = asd(l)

print(tyu)

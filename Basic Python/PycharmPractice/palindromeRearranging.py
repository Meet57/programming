def palindromeRearranging(inputString):
    unique = []
    data = []
    ret = True

    for char in inputstring:
        if char not in unique:
            unique.append(char)

    for i in unique:
        data.append(inputstring.count(i))

    for i in data:
        if i%2 == 0:
            continue
        else:
            if ret:
                continue
            else:
                return False

    return ret

inputstring = "abbcabb"

print(palindromeRearranging(inputstring))

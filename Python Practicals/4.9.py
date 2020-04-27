# Write a Python program to count the number of strings where the string length is 2 or more and the first and
# last character are same from a given list of strings.

def match_word(word):
    ctr = 0

    for i in word:
        if len(i) >= 2 and (i[0] == i[-1]):
            ctr += 1
    
    return ctr


print(match_word(["abc","aba","1221","xyz","asdsa","asdf"]))
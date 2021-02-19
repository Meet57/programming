# Write a Python program to split a list every Nth element.

l = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,5,16,17,18,19,20]

"""
list1 = source[::4]
list2 = source[1::4]
list3 = source[2::4]
list4 = source[3::4]
"""

def Split(c,step):
    return [c[i::step] for i in range(step)]

print(Split(l,3))
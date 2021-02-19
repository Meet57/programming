# Write a Python function that takes two lists and returns True if they have at least one common member.

def common(a,b):
    for i in a:
        if i in b:
            return True
    else:
        return False

l1 = [1,2,3,4,5]
l2 = [5,6,7,8,9]
l3 = [1,2,3,4]

print(common(l1,l2))
print(common(l2,l3))
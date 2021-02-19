#2.4 WAP to check whether entered character is vowel or consonant.

def vowel(c):
    v = ['a','e','i','o','u','A','E','I','O','U']
    if c in v:
        return True
    else:
        return False

c = str(input("Enter character : "))[:1]

if vowel(c):
    print("Vowel")
else:
    print("Consonant")
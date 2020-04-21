class Student:
    def __init__(self,name,age):
        self.name = name
        self.age = age

s = Student("Meet",25)

print(hasattr(s,'name'))

setattr(s,'age',45)
print(getattr(s,'age'))

delattr(s,'age')

'''print(s.age)
will through error'''
class Student:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    
    def __str__(self):
        return 'Name : '+self.name+'\nAge : '+str(self.age)
    
    def __repr__(self):
        return {'name':self.name, 'age':self.age}

s1 = Student("Meet",14)

print(s1)
print(s1.__repr__())
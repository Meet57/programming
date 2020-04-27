class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def getName(self):
        return self.name
    
    def getAge(self):
        return self.age

class Student:
    def __init__(self,id):
       self.id = id 

    def getId(self):
        return self.id

class resident(Person,Student):
    def __init__(self,name,age,id):
        Person.__init__(self,name,age)
        Student.__init__(self,id)


r1 = resident("A",18,1)
r2 = resident("B",19,2)
r3 = resident("C",20,3)

for i in [r1,r2,r3]:
    print("ID :   ",i.getId())
    print("Name : ",i.getName())
    print("Age :  ",i.getAge())
    print("--------------------------------")
    

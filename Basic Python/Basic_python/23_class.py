class Student:  
    "Hello This is class"
    def __init__(self,name,id,age):  
        self.name = name;  
        self.id = id;  
        self.age = age  


s = Student("John",101,22)  
print(s.__doc__)  
print(s.__dict__)  
print(s.__module__)  
class Teacher:
    Name = ""
    ID = ""

    def getValues(self):
        self.Name = input("Name of the Teacher : ")
        self.ID = input("Id : ")

    def printValues(self):
        print("Name : ", self.Name, "\nID : ", self.ID)


class Principal(Teacher):
    noOfDept = 0

    def getValues(self):
        Teacher.getValues(self);
        self.noOfDept = int(input("No of Departments : "))

    def printValues(self):
        print("--Principal--")
        Teacher.printValues(self);
        print("No Of departments : ", self.noOfDept)


class Professor(Teacher):
    noOfClasses = 0

    def getValues(self):
        Teacher.getValues(self);
        self.noOfClasses = int(input("No of Classes : "))

    def printValues(self):
        print("--Professor--")
        Teacher.printValues(self);
        print("No Of Classes : ", self.noOfClasses)


a = Principal()
b = Professor()

print("== Getting Values ==")
print("--Principal--")
a.getValues()
print("--Professor--")
b.getValues()

print("== Printing Values ==")
a.printValues()
b.printValues()

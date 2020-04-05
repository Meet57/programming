class Student:
    Name = ""
    Enrollment = ""
    spi = cpi = ""

    def getValues(self):
        self.Name = input("Enter student name : ")
        self.Enrollment = input("Enter Enrollment : ")
        self.spi = float(input("Enter SPI : "))
        self.cpi = float(input("Enter CPI : "))

    def printValues(self):
        print("Name of the Student :", self.Name, "\nEnrollment No :", self.Enrollment, "\nSPI :", self.spi, "\nCPI : ",
              self.cpi)


a = Student()
a.getValues()
a.printValues()

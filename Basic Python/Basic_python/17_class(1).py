class ComplexNumbers:
    def __init__(self,i,j):
        self.i = i
        self.j = j

    def getdata(self):
        print("{0}i + {1}j".format(self.i,self.j))


i = int(input('I variable:')) #i,j are parameters passed to c1 which is a object to the class
j = int(input('J variable:'))

c1 = ComplexNumbers(i,j) # c1 is a object
c1.j = 10

c1.getdata()

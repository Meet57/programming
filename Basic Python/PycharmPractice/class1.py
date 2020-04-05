class myClass:

    def get(self):
        self.__var = input("input1 : ")
        self.var2 = input("input2 : ")

    def print(self):
        print(self.__var)


a = myClass()
a.get()

a.print()
print(a.var2)

print(a.__var)

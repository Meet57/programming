class Person:
    "Creating details of every one"
    contact = {}
    name_list = []
    sex_list= []

    def __init__(self,i="None",j="None"):
        self.Name = i
        self.Sex = j
        self.name_list.append(i)
        self.sex_list.append(j)
        self.contact = {'Name: ':self.name_list,'sex':self.sex_list}


    def prin(self):
        print("Name: ", self.Name)
        print("Sex: ",self.Sex)

    def dic(self):
        print(self.contact)


list_m=[1,2,3,4]

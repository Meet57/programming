import my_module as md

print(md.Person.__doc__)

meet = md.Person("Meet","Male")
anil = md.Person()

print(type(meet))

md.Person.dic(meet)

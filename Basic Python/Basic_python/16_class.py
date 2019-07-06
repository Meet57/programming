class MyClass:
	"This is my second class"
	a = 10
	def meet(self):
		print(self.a)
		print('Hello')

print(MyClass.__doc__)
#object born
meet = MyClass()
meet.meet()

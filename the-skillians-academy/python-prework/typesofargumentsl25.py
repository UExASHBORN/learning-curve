""" WHAT ARE TYPES OF ARGUMENTS """
""" 	1) positional arguments
	2) keyword arguments
	3) default arguments
	4) variable length arguments (*args)
	5) keyword variable length arguments

"""

#positional arguments: arguments are passed in the same order as parameters
#order matter in positional arguments

def student(name, age):
	print(name, age)
student("Harshita",20)


#keyword arguments: arguments are passed using parameter names
def std(name,age):
	print(name,age)
student(age=20, name="Harshita")


#default arguments: parameters 	have default values if no argument is passed
def greet(name="Guest"):
	print("Hello!",name)
greet()
greet("Riya")


#variable length arguments: when you dont know how many arguments will be passed
#this will collect values into a tuple
def add_numbers(*numbers):
	print(numbers)
add_numbers(1,2,3,4)

def total_marks(*marks):
	a = 0
	for i in marks:
		a+=i
	print(a)

total_marks(23,4,56,7)



#keyword variable length arguments: this collects the data in the form of dictionary


def student_info(**data):
	for key, value in data.items():
		print(key,":",value)
student_info(name="Harshita",age=40,course="python")


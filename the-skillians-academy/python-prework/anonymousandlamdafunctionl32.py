""" WHAT IS ANONYMOUS AND LAMBDA FUNCTION IN PYHTON """

""" 	- it allows us to write quick functions in just one line
"""

#normal example
def add(a,b):
	print(a+b)
add(4,5)


#lambda function syntax: lambda argument: expression
add2 = lambda a,b: a+b
print(add2(3,4))


square= lambda x: x*x
print(square(4))

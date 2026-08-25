""" OPERATORS """
""" operators are special sysbols or keywords used to perform operations on variables and values

	python provide us several operators to perform : mathematical operations, comparisons,
	logical decision, assignments and bitwise operations.

	operators are fundamental block of our program because it tells us how will we be going to manipulate our data and tells
	us how our pprogram will gonna behave"""



""" TYPES OF OPERATORS IN PYTHON """
"""     1: arithmatic operator - "+,-,*,//,/,**"
	2: assignment operator - they are used to assign values to the variable "="
	3: comparison operator - "==,!=,<,<=,>,>="
	4: logical operator - AND, OR, NOT
	5: membership operator - membership operator checks whether the value is present in the sequence such as tuple, list, dictionary, string.
				 it has two types 1: IN OPERATOR	2: NOT IN OPERATOR
	6: identity operator -  it chedcks whether two variables refer to same object in memory or not
				it had two types 1: IS	2:IS NOT
	7: bitwise operator - perform operation on bitwise numbers which are 0 and 1
			      " & AND, | OR, ^ XOR, ~ NOT, << LEFT SHIFT, >> RIGHT SHIFT"	"""

num1 = 10
num2 = 5 #assignment operator at use



#arithmatic operator use cases
print(num1+num2)
print(num1-num2)
print(num1*num2)
print(num1/num2) #there are two type of devision normal devision"/" and floor devision "//" which removes the decimal part because devision return a float value
print(num1//num2)
print(num1%num2) #this willl give us the remainder
print(2**3) # this is an exponent operator and it meanso 2 raise to the power 3




#assignment operator use cases
sum = num1 + num2
print(sum)

num1 += 3
print(num1)
num1 -= 3
print(num1)
num1 *= 3
print(num1)




#comparison operator use cases
print(10==10)
print(10!=10)
print(12==10)
print(12!=10)
print(12<15)
print(12>15)





#logical operator use cases
print("Logical Operator Use Cases")
q = 10
w = 20
print( q>20 and q<30 )
print( q>5 and q<30 )
print( w>30 or w>10 )
print( w<30 or w>10 )
print( w>30 or w>40 )
print(not( q>20 and q<30))




#membership operator use cases
print("Membership Operator")
numbers=[12,70,20]
print(30 in numbers)
print(30 not in numbers)




#identity operator use cases
print("Identity Operator")
a = 10
b = 10
print( a is b )
print(a is not b)

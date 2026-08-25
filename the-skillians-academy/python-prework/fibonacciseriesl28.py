""" WHAT IS FIBONACCI SERIES """

""" 	- a series in which the nest number will be a sum of previous two number
	- two numbers aree necessary and by default we take 0,1
	- 0,1,1,2,3,5,8,13,21
"""

n = 10
a = 0
b = 1
print(a)
print(b)
for i in range(2,n):
	c = a + b
	print(c)
	a = b
	b = c


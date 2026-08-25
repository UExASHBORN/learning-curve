""" WHAT ARE PATTERN PROGRAMS IN PYTHON """

"""	- pattern in programs are used to print sysmbols, numbers, characters in different shapes like triangle, racktangle, square, right angle triangle
	- with the help of loops we can do it like hard coding but the kick is in using loops and we have to use the nested loops for this
	- they help us in building the logic using loops
	- outer loop is for rows and inner loop is for column
"""

#NOTE: loops inside the loop are called as nested loops

"""
QUESTION 1: THE PATTERN WE NEED TO CREATE: for every row we need to create 4 stars

****
****
****
****

"""


print("using only the outer loop")
for i in range(4):
	print("****")



print("using both loops")
for i in range(4):
	for j in range(4):
		print("*", end="")
	print()


print("using single loop with case")
for i in range(16):
	print("*", end="")
	match i:
		case 3:
			print()
		case 7:
			print()
		case 11:
			print()
		case 15:
			print()

"""
QUESTION 2: THE PATTERN WE NEED TO CREATE: for every row we need to increase one star in colums

*
**
***
****
"""
print("printing pattern of right angle triangle")
for i in range(1,5):
	for j in range(i):
		print("*", end="")
	print()



"""
QUESTION 3: THE PATTERN WE NEED TO CREATE: for every colum we need to decrese as the way we move forward in row
****
***
**
*
"""
print("upside down right angle triangle")
for i in range(4,0,-1):
	for j in range(i):
		print("*", end=" ")
	print()

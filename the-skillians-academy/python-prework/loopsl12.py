""" WHAT IS A LOOP """

""" 	a loop is used to repeat a block of code multiple time
	Types of loops in pyhton:
	1) while loop
		- while loop executes a block of code as long as the condition is true

	2) for loop:
		- a for loop is used to iterate over a sequence, meaning it goes through each item one by one
		- a sequence can be list, string, tuple, range
"""


""" WHILE LOOP """
i = 1
while i < 5:
	print("Hello")
	i = i+1




""" QUESTION: CREATE A PASSWORD CHECKER """
password = input("Write the password: ")
while password != "1234":
	print("Wrong Password")
	password = input("Write the password: ")
print("Access Granted")




""" INFINITE LOOP """
#while i<10:
#	print(i)




""" FOR LOOP """

for i in range(6):
	print(i)

#range included
for i in range(1,6):
	print(i)

#range with steps like in here we are skipping 2 numbers
for i in range(1,15,2):
	print(i)

stu = ["ash","john","murry"]
for i in stu:
	print(i)




""" DIFFERENCE BETWEEN WHILE LOOP AND FOR LOOP """
""" 	while loop:
		- runs on condition
		- unknown iteration
		- manual control ( i+=1 )
		- can become infinite easily

	for loop:
		- runs on sequence
		- known iteration
		- automatice iteration
		- safer
"""

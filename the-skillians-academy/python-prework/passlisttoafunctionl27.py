""" PASS LIST INTO A FUNCTION """

def list_passing(num):
	print(num)
	print(num[2])
	for items in num:
		print(items)

list = [1,2,3,4,5,6,7,8]

list_passing(list)


""" ACCESSING INDIVIDUAL ELEMENT OF THE LIST WHICH IS INSIDE THE FUNCTION """

""" PRINTING LIST THROUGH LOOPING """

#we can modify the list item as well inside the function because the list are mutable in nature

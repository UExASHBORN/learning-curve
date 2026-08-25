""" WHAT IS AN ARRAY """

""" 	an array is a collection of elements of the same datatype stored in a single variable 

"""


from array import *

numbers = [10, 20, 30, 40]

arr = array('i', [10, 20, 30, 40]) # i tells that the data stored in this array will be of integer datatype



print("printng the array which is just created")
print(numbers)
print(arr)



""" DIFFERENCE BETWEEN LIST VS ARRAY """
"""
	list:
		- different data types
		- flexible

	array:
		- same datatype
		- memory efficient
"""

print("Declaring and printing the array second")
arr2 = array('i', [1,2,3,4,5,6,7,8,9])
print(arr2[1])


print("Printing the array elements with the help of loop")
for i in arr2:
	print(i)

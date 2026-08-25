""" TAKING INPUT FROM USER AND SEARCHING AN ELEMENT IN ARRAY """

from array import *


arr = array('i', [])

n = int(input("Enter the number of elements in array: "))
for i in range(n):
	var = int(input("Enter the element: "))
	arr.append(var)

print(arr)


search = int(input("Enter the element which you need to search: "))

for i in range(len(arr)):
	if arr[i] == search:
		print("Element found at",i)
		break
	else:
		print("element not found at",i)


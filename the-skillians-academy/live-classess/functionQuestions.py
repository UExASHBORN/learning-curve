#q write a function for linear search
def linear_search(arr,num):
	for i in range(len(arr)):
		if(arr[i]==num):
			return True
	return False

array = [34,32,21,23,45,6,7,8,1]
search = 22

a = linear_search(array,search)
print(a)




#q write a function for binary search
def binary_search(arr,initial,final,search):
	while(initial<=final):
		half = (initial+final)//2
		if(arr[half]==search):
			return True
		elif(arr[half]>search):
			final = half
		else:
			initial = half + 1
	return False


array = [1,2,3,4,5,6,7,8,9,10]
i = 0
f = len(array)-1
s = 38

a = binary_search(array,i,f,s)
print(a)




#q Write a function greet(name) that takes a person's name and prints:
def greet(name):
	print(f"Greeting {name}!")

a = "Kushagra"
greet(a)




#q Write a function is_even(number) that returns "Even" if the number is even and "Odd" otherwise.
def is_even(number):
	if((number%2)==0):
		return "Even"
	return "Odd"

num = 31
ev = is_even(num)
print(ev)




#q Write a function rectangle_area(length, width) that returns the area of a rectangle.
def rectangle_area(length, breadth):
	return length*breadth
l = 4
b = 5
lb = rectangle_area(l,b)
print(f"{lb} m^2")




#q Check Positive, Negative or Zero
"""
Write a function check_number(number) that prints:

"Positive" if the number is greater than 0
"Negative" if the number is less than 0
"Zero" if the number is 0
"""

def check_number(number):
	if(number>0):
		print("positive")
	elif(number<0):
		print("negative")
	else:
		print("zero")

num = -34
check_number(num)




#q Write a function celsius_to_fahrenheit(celsius).

def celsius_to_fahrenheit(celsius):
	return (celsius*1.8)+32

c = 30
f = int(celsius_to_fahrenheit(c))
print(f)




#q Write a function to find the second-largest number in an array.
def second_largest(arr):
	largest = arr[0]
	secondLargest = arr[0]
	for i in range(len(arr)):
		if (largest<arr[i]):
			secondLargest = largest
			largest = arr[i]
		elif( secondLargest < arr[i]):
			secondLargest = arr[i]
	print("Largest :",largest)
	print("SecondLargest :", secondLargest)

a = [1,2,4,7,8,876,54,3,5,6,344]
second_largest(a)




#q Write a function to find how many numbers are greater than the average of the array.
def number_greater_then_the_average_of_array(arr):
	sum = 0
	for i in range(len(arr)):
		sum = sum + arr[i]
	avg = sum//len(arr)
	print("Average: ",avg)
	count = 0
	for i in range(len(arr)):
		if(arr[i]>avg):
			count = count+1
	print(f"Number of values greater then the average of array are {count}.")

array = [23,21,23,4,5,67,8,9,0,4,3,25]
number_greater_then_the_average_of_array(array)




#q Write a function to find the sum of only the even numbers.
def sum_of_only_the_even_numbers(arr):
	sum = 0
	for i in range(len(arr)):
		if((arr[i]%2)==0):
			sum = sum + arr[i]
	print(sum)

array = [23,22,12,34,2]
sum_of_only_the_even_numbers(array)




#q Write a function to find the sum of only the odd numbers.
def sum_of_only_the_odd_number(arr):
	sum = 0
	for i in range(len(arr)):
		if((arr[i]%2)!=0):
			sum = sum + arr[i]
	print(sum)

array = [23,33,3,44,22]
sum_of_only_the_odd_number(array)




#q Write a function to check whether an array is sorted in increasing order.
def whether_an_array_is_sorted(arr):
	for i in range(len(arr)-1):
		if(arr[i]>arr[i+1]):
			return False
	return True

a = [1,3,4,55]
c = [3,4,56,77,8,90,8]
b = whether_an_array_is_sorted(a)
print(b)
b = whether_an_array_is_sorted(c)
print(b)




#q Write a function to find the position/index of a given number in an array.
def position_index_of_a_given_number(arr,search):
	for i in range(len(arr)):
		if (arr[i] == search):
			print(f"The index of the searching number {arr[i]} is {i}")

array = [2,344,45,56,77,788,89,89,9,8,56,4,3]
s = 77
position_index_of_a_given_number(array,s)

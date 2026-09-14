#1.Write a program to create an array containing 10, 20, 30, 40, 50 and use linear search to find 30.

#2.Write a program to create an array containing 5, 12, 18, 25, 31, 40 and use linear search to check whether 25 is present.

#3.Write a program to create an array containing 3, 7, 11, 15, 20, 24 and use linear search to find a number that is not present in the array.

#4.Write a program to create an array containing 10, 20, 30, 40, 50 and use linear search to find the position of 40.

#5.Write a program to create an array containing 2, 4, 6, 8, 10, 12 and use linear search to count how many times 4 occurs.

#6.Write a program to create a sorted array containing 10, 20, 30, 40, 50, 60 and use binary search to find 40.

#7.Write a program to create a sorted array containing 5, 10, 15, 20, 25, 30, 35 and use binary search to check whether 25 is present.

#8.Write a program to create a sorted array containing 2, 4, 6, 8, 10, 12, 14 and use binary search to search for a number that is not present.

#9.Write a program to create a sorted array containing 10, 20, 30, 40, 50, 60, 70 and use binary search to find the position of 60.

#10.Write a program to create a sorted array containing 1, 3, 5, 7, 9, 11, 13 and use binary search to search for 7.


#q1 sol1
a = [10,20,30,40,50]
for i in range(len(a)):
	if(a[i] == 30):
		print("Element 30 is found at index",i)
		break



#q2 sol2
a = [5,12,18,25,31,40]
for i in range(len(a)):
	if(a[i] == 25):
		print(f"Yes, element 25 is present at index {i}")




#q3 sol3
a = [3,7,11,15,20,24]
n = 35
i = 0
for s in range(len(a)):
	if(a[s] != n):
		print(f"Element {n} is not found at index {s}, insted the element was {a[s]}")




#q4 sol4
a = [10,20,30,40,50]
for i in range(len(a)):
	if(a[i] == 40):
		print("Element 30 is found at index",i)
		break




#q5 sol5
a = [2,4,6,8,10,12]
count = 0
for i in range(len(a)):
	if(a[i] == 4):
		count = count + 1
print(f"The total number of times 4 occur is {count}.")




#q6 sol6
a = [10,20,30,40,50,60]
s=40
i=0
l= len(a) - 1
while(i<=l):
	half =  (i+l)//2
	print(half)
	if(a[half] == s):
		print(f"Element {s} is found at index {half}.")
		break
	elif(a[half]>s):
		l = half
	else:
		i = half + 1




#q7 sol7
a = [5,10,15,20,25,30,35]
s = 25
i = 0
l = len(a)-1
while(i<=l):
	half = (i+l)//2
	if(a[half] == s):
		print(f"{s} is present in the array")
		break
	elif(a[half]>s):
		l = half
	else:
		i = half + 1




#q8 sol8
a = [2,4,6,8,10,12,14]
s = 12
i = 0
l = len(a)-1
while(i<=l):
	half = (i+l)//2
	if(a[half] == s):
		print(f"{s} is present in the array")
		break
	elif(a[half]>s):
		l = half
	else:
		i = half + 1
if(a[half] != s):
	print(f"The element {s} is not present in the array")




#q9 sol9
a = [10,20,30,40,50,60,70]
s = 60
i = 0
l = len(a)-1
while(i<=l):
	half = (i+l)//2
	if(a[half] == s):
		print(f"We have found the element {s} at index {half}.")
		break
	elif(a[half]>s):
		l = half
	else:
		i = half + 1




#q10 sol10
a = [1,3,5,7,9,11,13]
search = 7
initial = 0
final = len(a)-1
while(initial<=final):
	half = (initial+final)//2
	if(a[half] == search):
		print(f"The element {search} is present in the array at index {half}")
		break
	elif(a[half]>search):
		final = half
	else:
		initial = half + 1

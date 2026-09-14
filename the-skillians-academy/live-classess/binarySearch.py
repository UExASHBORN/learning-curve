# NOTE: Binary search only works on non descending arrays

a = [1,13,16,20,20,20,20,20,20,20,21,26,66,77,88,99]
n = 20
l = 0
size = len(a)
print("Initial length of the array is :",size)
for i in range(size):
	print("Array element at index",i,"is",a[i])
if((a[l] != n) and (a[size-1] != n)):
	c = size//2
	print("Deviding the array into half, element to saearch reach to:",c)
	for i in range(c):
		print("Array element at index",i,"is",a[i])
	if(a[c] == n):
		print("Element found at index",c-1)
elif (a[0] == n):
	print("Element found at index",l)
else:
	print("Element found at index",size -1)

#		c = c//2
#		print("Deviding the array into half again, elements to search reach to:",c)

n = 99
a = [1,13,16,20,20,20,20,20,20,20,21,26,66,77,88,99]

initial = 0
length = len(a)-1

while(initial<=length):
	half = (initial+length)//2
	print(half)
	if(a[half] == n):
		print(f"Element {n} is found at index {half}")
		break
	elif(a[half]>n):
		length = half
	else:
		initial = half + 1

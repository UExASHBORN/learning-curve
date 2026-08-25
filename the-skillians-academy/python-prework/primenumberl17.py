""" HOW TO CHECK WHETHER THE NUMBER IS A PRIME NUMBER OR NOT """

""" 	- a prime number is a number that has only two factors
	- 1 and the number itself
"""



""" BRUTE FORCE METHOD NOT VERY IDEAL """
count=0
number = int(input("Enter the number: "))

for i in range(1,number+1):
	if(number%i==0):
		count = count + 1

if(count == 2):
	print("prime number")
else:
	print("Not a prime number")




""" EFFICIENT WAY """
is_prime = True

if number <= 1:
	is_prime = False
	print("Not a prime Number brlow 1")
for i in range(2,number):
	if number%i == 0:
		is_prime = False
		print("Not a prime number for")
		break
if is_prime:
	print("Prime number")

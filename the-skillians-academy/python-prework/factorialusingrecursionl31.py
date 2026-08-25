""" FACTORIAL USING RECURSION """


#normal one
n = 10
fact = 1
for i in range(1,n+1):
	fact = i*fact
	print(fact)
print(fact)



#using recursion

def factorial(n):
	if n == 0:
		return 1
	return n*factorial(n-1)

print(factorial(10))


""" IF ELSE STATEMENT """

""" 	 if, else, elif, nested if, statement are basically made decision making algorythm for us in programs
	 decision making in programming basically means to execute different part of code based
	 on different condition

	 if statement is used to check the condition. if the condition is true, the code inside it will execurte

	 if-else statement , sometimes we want to handle both cases: is condition is true and if condition is false

	 if-elif-else statement, sometimes we have multiple conditions. that's where elif comes in

	 nested if statement, nested if is if inside another if		"""




#program to check for valid login credentials
username = 'admin'
password = 12345

if username == "admin" and password == 12345:
	print("logged in")
else:
	print("failed to login")




#profram to check whether the number is odd or even
num = 11

if num%2 == 0:
	print("even")
else:
	print("odd")



#example of nested if
age = 18
if age >= 18:
	if age <= 40:
		print("Young Adult")

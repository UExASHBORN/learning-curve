""" WHAT IS FOR ELSE IN PYTHON """

"""
	- the else block runs only when the loops completes normally
	- if the loop is stopped using break, the else block does not run
	- syntax:
		for variable in sequence:
			statement
		else:
			statement

	- use case:
		for example if you are searching for a key and you didnt find it then else and if you found it then there is no need to go to else
"""


print("This will run because there is no break")
for i in range(10):
	print(i)
else:
	print("Loop completed")


print("here else will not run")
for i in range(3):
	if i == 1:
		break
	print(i)
else:
	print("Loop Completed")



""" FOR VS FORELSE LOOP

	- for loop:
		runs loop
		no final action
		basic iteration

	- for else:
		adds completion check
		runs else if no break
		used in search / logical problems
"""


""" WHEN SHOULD WE USE FOR ELSE STATEMENT?

	1) searching problems
	2) validating checks
	3) when you need action after loop completion
"""

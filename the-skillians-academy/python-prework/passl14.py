""" WHAT IS PADD STATEMENT """

""" 	when we write in python
	if True:
	and nothing after it like leave it empty then python will give an error because python expects some
	code inside the if block

	now if you have to write en empty block then there we use the pass statements so pass statement is used as a placeholder
	it tells python do nothing for now but dont give an error pass means skip writing code for now
"""

if True:
	pass

""" WHEN DO WE NEED THE PASS STATEMENT """

""" 	1) when we are writing the code step by step
	2) when function or loop is not implemented yet
	3) when we want an empty block temporarily
"""



""" LETS COMPARE BREAK, CONTINUE, PASS """

""" 	break
	- stops loop
	- loop ends

	continue
	- skips one iteration
	- loop continues

	pass
	- does nothing
	- loop continues normally
"""

print("program for break continue and pass")
for i in range(1,20):
	if i == 2:
		continue
	elif i == 7:
		break
	elif i == 3:
		pass
	print(i)
	

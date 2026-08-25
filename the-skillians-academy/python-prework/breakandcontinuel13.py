""" WHAT IS BREAK AND CONTINUE """

""" 	in loops sometimes we dont want to run the row completely sometimes we want to stop early , skip a particular step
	to control loop in such situations python provide two impoertant statements and what are those:
	first is a break statement and second is the continue statement

	1) break:
		the break statement is used to stop the loop immediately, even if the loop condition is still true

	2) continue:
		the continue statement skips the current itereation and moves on to the next one

	use cases of both in real life:

	i) break:
		if we have a list of 1000 numbers lets say and we want to seach a number then the number will be present
		in the beginning so when we found it then we would not want to iterate for the whole list thats where break 
		statement comes into play

	ii) continue:
		if you are processing a data and you want to skip the one which has invalid data then you will use the
		continue statement for it.

"""




""" BREAK """
print("break staterment program")
for i in range(6):
	print(i)
	if i == 1:
		break



""" CONTINUE """
print("continue statement program")
for i in range(1,10):
	if i == 5:
		continue
	print(i)




""" KEY DIFFERENCE BETWEEN CONTINUE AND BREAK STATEMENT """
""" 	break:
	- stops loop completely
	- loop ends immediately
	- used to exit loop

	continue:
	- skips current iteration
	- loop continue
	- used to skip

"""
print("program using both break and continue")
for i in range(1,10):
	if i == 3:
		continue
	if i == 7:
		break
	print(i)

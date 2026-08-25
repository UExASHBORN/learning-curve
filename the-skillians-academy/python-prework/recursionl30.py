""" HWAT IS RECURSION """

""" 	- function calling itself again and again is called recursion

	WHY DO WE NEED RECURSION?
	- recursion helps in solving the problem by breaking it down
	- or solve smaller parts
	- or by combining all the results togather


	EVERY RECURSIVE FUNCTION HAS TWO PARTS
	1) base case
	2) recursive call


"""


def fun():
	print("Hello!")	
	fun()
#fun()


def fun2(n):
	if n == 0:
		return
	print("hello")
	fun2(n-1)
fun2(5)

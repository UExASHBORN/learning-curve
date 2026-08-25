""" WHAT IS A VARIABLE """

""" 	- a variable is simply a container that store a value
"""


#what is local variable?
#a local variable is a variable which is defined inside the function only if you are trying to use that variable outside the function then that will give you an error

def test():
	x = 5
	print(x)
test()




#what is a global variable?
#a global variable is a variable which is defined outside all function

y = 10 #this is a global variable because it doesnt have any scope because its at the top global simply means public
def test2():
	print(y)
test2()


z=14
def test3():
	z=17 #here you can notice the value of z is changes but it doesnt effect the value of z which is globally set
	print(z) #so python treats variable inside the function as local by default
test3()
print(z)


#to solve this we can do
m =48
def test4():
	global m
	m = 45
	print(m)
test4()
print(m)

""" TAKING INPUT FROM THE USER """

""" 	the input() function is used to take the input from the user during the program execution
	"""

name = input ("Enter your name: ")
print("Your Name is",name+"!")
print(type(name))

#NOTE input always take string as input bydefault so if we have to change it then we have to use the datatype conversions
age = int(input("Enter your Age: "))
print("Your Age is",age)
print(type(age))


price = float(input("Enter the price: "))
print("Price is",price)
print(type(price))


""" ADD TWO NUMBERS BY TAKING THE INPUT FROM THE USER """
first = int(input("Enter your first number: "))
second = int(input("Enter your second number: "))

print("Addition of the input numbers is",first+second)

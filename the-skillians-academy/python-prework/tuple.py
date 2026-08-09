""" TUPLE  """

"""

a tuple is a collection of multiple items stored in a single variable,
just like a list. the major difference is that the tuples are immutable.


"""



numbers = (10,20,30,40)
print(numbers)
print(type(numbers))


""" real life example of tuple use is that we can store the numbers of days in a weak because they will never change 
#they will always be monday, tuesday, wednesday, thursday, friday, saturday and sunday. """



#printing data of tuple with the help of indexing
print(numbers[2])




#string data tuple
fruits=("Apple","Mango","Orange")
print(fruits)
print(fruits[1])
print(fruits[0:2])



#fruits.append("Grapes") """ Not possible in tuple """
#fruits[0]="Grapes" """ Not possible in tuple """



#Tuple Packing
""" Pyhton allows us to assign multiple values to a tuple at once this is known as packing
when multiple values are packed inside a tuple """



values=1,2,3,4,5 #in python we can create a tuple without brackets
print(type(values))




#Tuple Unpacking
""" Assigning values of tuple to different variables """

print(values)
a,b,c,d,e=values # unpacking will require the same number of different variables as the number of values are in tuple
print(a)
print(b)
print(c)



#Difference between list and tuple
""" LIST - mutable, []systax, dynamic data which could be append or changed
    TUPLE - not mutable, ()syntax, Fixed data which can't be append or changed """

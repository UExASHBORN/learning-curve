"""

A Python list is a built-in, ordered and mutable
collection of items that allows duplicates
and can store mixed data types

"""

marks=[34,10,55]
#checking the data type of the marks 
print(type(marks))
print(marks)

#printing elements of the list with the help of indexing
print(marks[2])

#making list of string type
fruits=["Apple","Banana","Kiwi"]

#checking the datatype of fruits
print(type(fruits))
print(fruits)
print(fruits[2])

#getting access of the list elements with the help of negative indexing
print(marks[-2])
print(fruits[-3])


#list slicing allow us to access multiple elements of the list
numbers=[1,2,3,4,5,6,7,8,9]
print(numbers[0:4])

#modifying list elements
fruits[2]="Pineapple"
print(fruits)

#appending list elements which in simple terms means that we are just adding an element in the list at last

fruits.append("Orage")
print(fruits)

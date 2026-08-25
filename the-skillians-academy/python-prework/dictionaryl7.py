""" DICTIONARY """

""" a dictionary is a collection of data that is stored in key-value pairs """


student = {
	"name" : "Harshita",
	"age" : 22,
	"course" : "B.tech",
}

print(student)



#important properties which dictionary follow
"""
1: key must be unique - 
2: values can be duplicate - 
3: dictionaries are mutable - this means we can modify the data written in dictionary
4: keys must be immutable - this means we cant have list as dictionary keys because they are mutable  """



#there are two methods to create dictionaries
"""
1: using curly braces which we had used above
2: using the dict() function """



person = dict(
	name = "Rahul",
	age = 22,
	city = "Bhopal"
)
print(person)
print(person["name"])





#there is another function which you can use to access the values of dictionary
print(person.get("name"))





#we can add value into the  dictionary throgh
person["Mobile"]=2368752843;
print(person)
student["Year"]="second";
print(student)





#updation of the value
person["name"]="Rohit";
print(person)





#removal of the element from dictionary
"""
1: pop()
2: popitem() """

person.pop("name")
print(person)




#to remove  the last element in the dictionary
person.popitem()
print(person)



#if we want ot enpty the dictionary
person.clear()
print(person)
print(type(person))




#for checking the length of the dictionary
print(len(person))
print(len(student))

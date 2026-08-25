""" SETS """


"""
a set a is a collection of unique elements stored inside a single variable
a set is created with the help of curly braces {}

"""

#important properties of sets
"""1: sets stores only unique values"""
"""2: sets are unordered """ #This means we can't access an element with the help of indexing and they dont support slicing as well
"""3: sets are mutable """ #This means we can add or remove an element form sets but we will not be able to achieve it with the help of indexing
"""4: elements must be immutable """ #This means we will only be able to store immutable data in sets like string, integer, tuple but not list


numbers = {34,1,2,2,2,99,3,45,4,5,56,1}
print(numbers)




#important operation in sets

""" 1: adding element to a set
	add() - add is use to add single element into the set
	update() - for adding multiple elements

    2: removing elements from the sets
    	remove() - this will throw error if the value given to remove doesn't exist in set
	discard() - this will remove but doesnt trow any error if the set doesn't have that element
	pop() - removes random element from the set, now because set are unordered so whichever element comes at the last in the row that will be removed
	clear() - this will empty the set """


numbers.add(32) #for adding single element
print(numbers)

numbers.update((345,346,347)) #for adding multiple elements
print(numbers)

numbers.remove(32) #this will throw error if the value given to remove doesn't exist in set
print(numbers)

numbers.discard(100) #this will remove but doesnt trow any error if the set doesn't have that element
print(numbers)

numbers.pop() #removes random element from the set, now because set are unordered so whichever element comes at the last in the row that will be removed
print(numbers)

#numbers.clear() #this will empty the set
#print(numbers)




#important mathematical operations in sets
"""
1: union - combining two sets
2: intersection - common elements between the two sets
3: difference - when you subtract set 1 elements to set 2 elements then whatever remains after removing the common elements that is the difference """

values = set([ 987, 976, 34, 3 ])
print(type(values))
print(values)

print(numbers | values)
print(numbers & values)
print(values - numbers)

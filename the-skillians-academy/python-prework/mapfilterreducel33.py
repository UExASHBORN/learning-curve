""" MAP FILTER AND REDUCE WITH LAMBDA """
from functools import reduce


#map is used to apply a function to every element of the lsit
#the hard way
numbers = [3,4,5,66,7,88,43,22]
print(numbers)
result = []
for n in numbers:
	result.append(n*2)
print(result)


#using lambda and map
mapresult = list(map(lambda x: x*2, numbers))
print(mapresult)




#filter is used to select elements based on the condition
filterresult = list(filter(lambda x: x%2==0, numbers))
print(filterresult)




#reduce is used to reduce a list into a single value
reduceresult = 	reduce(lambda z,m: z+m,numbers)
print(reduceresult)

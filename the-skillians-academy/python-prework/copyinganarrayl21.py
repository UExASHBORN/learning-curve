""" COPYING AN ARRAY """

import numpy as np

arr1 = np.array([1,2,3])

arr2 = arr1

print(arr1)
print(arr2)

""" 	here we think that we had copied the array but in actual it is just referencing to the
	first array meaning it will change stuff in arr1 if we try to edit the elements of arr2
"""

arr1[0] = 100

print(arr1)
print(arr2)
"""
	- this means bhth were pointing to the same memory
	- so assignment operator doesn't copy the data it only create the reference
"""
print(id(arr1))
print(id(arr2))


#Now if we want to create new object but the data is still beilg shared then we have a concept called as shallow copying using view method

arr3 = arr1.view()
arr3[0] = 34
print(arr1)
print(arr2)
print(arr3)

print(id(arr1))
print(id(arr3))
"""
	this had created a new object but the data was still being shared
	in shallow copy the objects are different but the data is shared
"""

#now we have another concept known as deep copy using dot copy method
arr4 = arr1.copy()
arr4[0] = 7623

print(arr1)
print(arr4)
print(id(arr1))
print(id(arr4))

"""
	in deep copy both object and data are separate
"""

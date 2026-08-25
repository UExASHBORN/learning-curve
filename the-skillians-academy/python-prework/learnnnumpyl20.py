""" WHY NUMPY WHATS THE NEED """

""" 	waht if we want to work with thousands and millions of numbers what if we wanted to do mathematical operations
	using normal list to do that will be very slow, memory heavy and difficult to manage. so, to solve this problem
	python provides a powerfull library which is numpy.


	WHAT IS NUMPY?
	- numpy stands for numerical python
	- it is a library used for:
		- fast calculations
		- working with large datasets
		- multi-dimentional arrays

	WHY DO WE NEED NUMPY
	- numpy are faster then list
	- less memory usage
	- easy mathematical operation
	- supports multi-dimentional array

	REAL LIFE USE FIELDS?
	- data science
	- machine learning
	- image processing
	- scientific computing

"""



import numpy as np
#using lsit we can not directly multiply
a = [1,2,3]
b = [4,5,6]




""" FIRST METHOD OF CREATING ARRAY USING THE FUNCTION ITSELF """
#but we can directly multiply using numpy

A = np.array([1,2,3])
B = np.array([4,5,6])
print(A * B)



""" SECOND METHOD IS BY USING LIN SPACE """
print(np.linspace(0,10,5))



""" THIRD METHOD IS BY USING A RANGE FUNCTION """
print(np.arange(1,10,2))



""" FOURTH CREATING ARRAY OF ZEROS """
print(np.zeros(5))


""" FOURTH CREATING ARRAY OF ONES """
print(np.ones(5))



""" FIFTH CREATING RANDOM VALUES BETWEEN ZERO AND ONE """
print(np.random.rand(5))


""" SIXTH WE JUST WANT ONE BETWEEN THE DIAGONAL WHICH IS CALLED IDENTITY MATRIX """
print(np.eye(5))



""" CREATING TWO DIMENTIONAL ARRAY """
print(np.array([[1,2],[3,4]]))


""" CHANGING 1D ARRAY INTO 2D ARRAY """
C = np.array([1,2,3,4,5,6])
print(C.reshape(2,3))


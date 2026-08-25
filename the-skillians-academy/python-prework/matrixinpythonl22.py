""" WHAT IS A MTRIX """

""" 	- a matrix is a 2D collection of numbers arranged in rows and columns 
		[ 2 3 4 ]
		[ 5 6 7 ]
	- this example got 2 rows and 3 columns
	- we can use normal list yeah but they are slow and memory heavy that why we will be using numpy
	- numpy makes matrix calculations faster easier and more efficient 
	- use cases of matrix is in image processing and many more
"""

import numpy as np

A = np.array([[2,3,4],[5,6,7]])
print(A)
print(A.shape)
print(A[0][1])


B = np.array([[5,64,4],[23,45,7]])
print(B)


""" MULTIPLICATION PLUS ADDITION IN MATRIX """

print(A+B)
print(A*B)


""" TRANSPOSE OF A MATRIX """
"""
	in trnaspose rows of the matri become colums
"""
C = np.array([[3,4,5],[5,4,2],[1,3,4]])
print(C)

print(C.T)


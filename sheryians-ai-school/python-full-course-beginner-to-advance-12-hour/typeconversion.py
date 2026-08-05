"""TYPE CONVERSION"""

#four main type conversion function int(), float(), bool() and str()

"""int to string conversion"""
a = 13;
print(type(a))
a = str(a)
print(type(a))


"""string to int conversion"""
b = "5"
print(type(b))
b = int(b)
print(type(b))


"""string to bool conversion"""
c = "dfgg"
print(bool(c))
c = 0
print(bool(c))
#there are some values which return true and there are some values which return false
#there are total 7 values which return false value
"""( False , 0 , 0.0 , "" empty string , [] empty list , () empty tuple , {} empty dictionary )"""


#there are two types of type conversion implicit and explicit
#explicit are the ones which we did above like manually eg:
d = 34
print(type(d))
d = str(d)
print(type(d))

#implicit are the ones which python do automatically eg:
e = 12
print(type(e))
e = 12/2
print(type(e))

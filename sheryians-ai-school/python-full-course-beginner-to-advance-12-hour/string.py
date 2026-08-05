"""MORE ABOUT STRINGS"""

#string takes more space because whatever we store in it has a unicode
a = "B"
print(ord(a))

b=67
print(chr(b))

#we can access letter as well as words with the help of indexing in string and by default it start with zero
c = "SHER"
print(c[1]) #positive indexing
print(c[-3]) #negative indexing

#slicing
d = "SHER CODER"
print(d[0:4:1])

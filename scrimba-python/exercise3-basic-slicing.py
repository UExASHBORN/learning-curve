#1:- print "1 Welcome Ring To Tyler"
#2:- Every letter in the string must be in title format
#3:- Print the same string backward's
str = "welcome to pyhton 101 :string"
str2 = str[18]+' '+str[:7]+' '+str[25:29]+' '+str[8:10]+' '+str[8]+''+str[12]+''+str[2]+''+str[1]+''+str[25]
print(str2.title())
print(str2[::-1].title())
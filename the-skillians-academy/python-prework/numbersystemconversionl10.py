""" WHAT IS NUMBER SYSTEM """

"""	A number system is a way of representing numbers using digit's. Different system use different bases
	There are 4 important Number systems
	1) Decimal Number System (Base 10)
	2) Binary Number System (Base 2)
	3) Octal Number System (Base 8)
	4) Hexa-Decimal Number System (Base 16)

	Decimal Number System are the system which we use in our daily life
	Binary Number System is the system  which Computer Uses
	Octal and Hex are the short form of Binary

	Eg:
	In web development we sue hexadecimal values to represent colour
	#FFFFFF
	#000000
	#FF5733 ( FF means red, 57 means green, 33 means blue )
	chmod 755 file.txt ( octal is used in giving file permissions in linux and unix systems )

	"""

print("Decimal number system to other Number System")
num = 10
print(bin(num)[2:])
print(oct(num)[2:])
print(hex(num)[2:])

print("Binary to other int / decimal")
binary = "1010"
print(int(binary,2))

print("Octal to int / decimal")
octal = '12'
print(int(octal,8))

print("Hexadecimal to int / decimal")
hexadecimal = 'A'
print(int(hexadecimal,16))

#NOTE: binary, hexadecimal, octal conversion to int / decimal will only accept string value


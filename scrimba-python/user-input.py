#Using strings as input.
name= input('what is your name?: ')
age=input('what is your age?: ')
print('Hello ' + name + '. You are ' + age + ' year\'s old.')

#Using integers as input.
num1=input('Enter the first number : ')
num2=input('Enter the second number : ')
ans=int(num1)+int(num2) #if you will not provide type as int then the terminal will gona treat the number as string
print(ans)
#You sell lemonades over two weeks , The lists shows number of lemonades sold per week .
#Profit for each lemonade sold is 1.5$ .
#Add another day to week 2 list by capturing a number as input .
#Combine the two list's into the list called 'sales'.
# Calculate / Print How much you have earned.
#1:- Best Day
#2:- Worst Day
#3:- Separately and in total
 #Hint :- 3 prints in total

sales_w1 = [7,3,42,19,15,35,9]
sales_w2 = [12,4,26,10,7,28]
sales=[]

a = int(input('Enter the number of lemonaes sold on the last day of the week second : '))
sales_w2.append(int(a))
# print(sales_w1)
# print(sales_w2)

# print(sales)
# sales_w1.extend(sales_w2)
# sales = list(sales_w1)
sales = sales_w1 + sales_w2
# print(sales)

total = sum(sales)
print('The total no. of leonades sold :',total)
print('How much do we have earned in total: '+str(total*1.5)+'$')

# sales.sort()
# best_day = sales[-1]*1.5
# print(f'Best day of the week sales {best_day}$')
# worst_day = sales[0]*1.5
# print(f'Worst day of the week sales {worst_day}$')
# print(f'Combining the profit of both the days we got :{worst_day+best_day}$')

print(f'Best day of the sales {max(sales)*1.5}$')
print(f'Worst day of thre sales {min(sales)*1.5}$')
print(f'Combining the sales of both the day\'s {min(sales)*1.5+max(sales)*1.5}$')
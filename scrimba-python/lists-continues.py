friends = ['wozniac','kevin','danni','ashe','kevin','kevin']
# print(friends)

# friends.reverse() #just reverse the string
# print(friends)

# friends.sort() #assending order sort
# print(friends)

# friends.sort(reverse=True) #descending order sort
# print(friends)

# print(min(friends))

# print(max(friends))



numberplate = [473,4396,737,374,45]
# print(numberplate)

# numberplate.sort()
# print(numberplate)

# numberplate.sort(reverse=True)
# print(numberplate)

# print(max(numberplate))

# print(min(numberplate))

# print(sum(numberplate))

#if we want to insert anything into the list then we use append , insert or direct indexing which replace

# friends.append('terry')
# print(friends)
# friends.insert(2,'yogurt')
# print(friends)
# friends[-1]='terryg'
# print(friends)

# we use extend to add two lists

friends.extend(numberplate)
print(friends)

# If we want to remove anything then we use functions like pop,remove and delete functions

# friends.remove('ashe')
# print(friends)

# friends.pop(2)
# print(friends)

# # friends.clear()
# # print(friends)

# del friends[2] # It's a bit powerfull os be carefull while using it.
# print(friends)

#If we want to copy list then

new_friends = friends[:]
print(friends)
print(new_friends)

again = new_friends.copy()
print(again)

once_more = list(friends)
print(once_more)
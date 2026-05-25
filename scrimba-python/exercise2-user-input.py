# - Create a distance converter converting Km to miles
# - Take two inputs from user: Their first name and the distance in km
# - Print: Greet user by name and show km, and mile values
# - 1 mile is 1.609 kilometers
# - hint: use correct types for calculating and print
# - Did you capitalize the name

name = input ( ' Please Enter your First Name: ' )
distance = float(input ( ' Please provide the Distance in km: ' ))
distance_in_miles= distance/1.609
print(f'Hello {name.title()}! {distance}km is equivalent to {round(distance_in_miles,1)} miles.')
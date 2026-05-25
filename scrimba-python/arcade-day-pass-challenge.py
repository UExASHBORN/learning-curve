# 🕹️ Arcade Day Pass Tracker — Challenge Steps
#
# 1) Create variables to store:
#    - customer name
#    - number of passes
#    - tokens per pass
#    - price per pass
#    - tokens required per game
#
# 2) Calculate:
#    - total tokens
#    - total cost
#    - games available  (use 'floor division' to get a whole number)
#
# 3) Print a summary with:
#    - customer name
#    - passes bought
#    - total tokens
#    - total cost
#    - games available

#Variable Declaration.
customer_name='Yahya Naseem'
number_of_passes=8
tokens_per_pass=12
price_per_pass=120.00
tokens_required_per_game=2

#Calculation.
total_tokens= number_of_passes*tokens_per_pass
total_cost=price_per_pass*number_of_passes
games_available=total_tokens//tokens_required_per_game

#Printing the Summary.
print("==== ARCADE DAY PASS ====")
print('Customer Name :-', customer_name)
print('Passess Bought :-', number_of_passes)
print('Total Number of Tokens :-', total_tokens)
# print('Total Cost :- $'+ str(total_cost))
print(f"Total Cost: ${total_cost:.2f}")  #for tidiness and always showing two values after a decimal point
print('Total Games Available :-', games_available)
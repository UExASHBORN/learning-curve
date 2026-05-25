# 🏁 Pit Stop Timing Optimizer 🔧
#
# 1. Ask the user for the total race time in seconds.
# 2. Ask how many pit stops were made.
# 3. Ask for the average pit stop duration (in seconds).
#
# Then:
# - Calculate the total pit stop time.
# - Calculate the percentage of the race spent in the pits.
# - Round the percentage to 2 decimal places.
#
# Finally, print all of the following:
# - Total pit stop time in seconds
# - Percentage of race time spent in pits
# - A final message if pit time > 5% of the race: "You need a new pit crew. 🛠️"

race_time = float(input("Mention the total race time (in seconds) : "))
pit_stop = int(input("How many total no. of pit stops were made : "))
average_pit_stop = float(input("Mention the average pit stop duration (in seconds) : "))

total_pit_stop_time = average_pit_stop*pit_stop
percentage_race_time_spent_on_pit = (total_pit_stop_time/race_time)*100
percentage_race_time_spent_on_pit=round(percentage_race_time_spent_on_pit,2)

print(f'The total time spend on pit\'s is {total_pit_stop_time} seconds')
print(f'Percentage of race time spend in pits is {percentage_race_time_spent_on_pit}%')
if percentage_race_time_spent_on_pit > 5 :
    print("You need a new pit crew")

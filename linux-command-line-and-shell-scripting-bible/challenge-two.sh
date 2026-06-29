#<< 'EOF'
#Challenge 2: The Executable File Counter & Reporter
#Now that you have mastered inspecting items inside a directory , let\'s try something that adds variables, loops, and basic math together.
#
#Your Task:
#Write a script that looks inside that same learning directory and counts how many files are actually executable (scripts that have execute permission).
#
#Define your path variable.
#
#Initialize a counter variable at 0 (e.g., count=0).
#
#Use a for loop to look at every item in the directory.
#
#Inside the loop, use an if condition to check if the item is a regular file AND if it is executable.
#
#
#Hint: The flag to check if a file is executable is -x (just like -f checks if it's a file).
#
#If both conditions match, increment your counter by 1.
#
#
#Hint: You can do math using count=$(expr $count + 1) or count=$[count + 1].
#
#After the loop finishes completely, print a final message showing the total: "Total executable scripts found: X"
#EOF

#!/bin/bash
	echo "f

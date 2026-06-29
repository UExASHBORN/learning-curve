#Challenge 1: The File & Directory Scanner
#Write a script that does the following:
#
#Create a variable that holds a directory path of your choice (e.g., your desktop or a specific learning folder).
#
#Use an if condition to check if that directory actually exists.
#
#If it doesn't exist, print an error message saying: "Error: Directory not found."
#
#If it does exist, use a for loop to look at everything inside that directory.
#
#For every item found inside that directory:
#
#If it is a directory, print: "[DIR] - <name of directory>"
#
#If it is a regular file, print: "[FILE] - <name of file>"

#!/bin/bash
path="/home/ashborn/Desktop/learning-curve/linux-command-line-and-shell-scripting-bible" 
if [ -d $path ]; then
	echo "DIRECTORY EXIST"
	for name in "$path"/*
	do
		clearName=$(basename "$name")
		if [ -d $name ]; then
			echo "It's a [DIR]: $clearName"
		elif [ -f $name ]; then
			echo "It's a [FILE]: $clearName"
		fi
	done
else
	echo "Directory doesn't Exist"
fi

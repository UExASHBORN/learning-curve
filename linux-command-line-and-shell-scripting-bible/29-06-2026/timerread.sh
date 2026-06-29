#!/bin/bash
if read -t 5 -p "Enter Name: " name; then
	echo "Hello! $name"
else
	echo "No name provided"
fi
exit 0

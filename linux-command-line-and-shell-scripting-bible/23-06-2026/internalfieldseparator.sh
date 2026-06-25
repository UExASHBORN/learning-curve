#!/bin/bash
IFS=$'\t\n'
for name in $(cat cities.txt)
do
	echo "Name of the city is $name"
done

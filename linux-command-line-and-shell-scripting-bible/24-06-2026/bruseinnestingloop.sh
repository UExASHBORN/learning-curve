#!/bin/bash
for (( i=0 ; i<5 ; i++ ))
do
	for (( j=0 ; j<5 ; j++ ))
	do
		if [ $j -eq 2 ]; then
			break
		fi
		echo "$i $j"
	done
done

#!/bin/bash
num=1
while [ $num -lt 10 ]
do
	echo "Num is $num" > bbc.txt
	sleep 2
	num=$[ $num + 1 ]
done
x=1

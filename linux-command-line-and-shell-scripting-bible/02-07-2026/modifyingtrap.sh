#!/bin/bash
trap "echo 'SIGINT is trapped' " SIGINT
num=1
while [ $num -lt 10 ]
do
	echo "Num is $num"
	sleep 2
	num=$[ $num + 1 ]
done
trap "echo 'Modified for SIGINT'" SIGINT
x=1
while [ $x -lt 10 ]
do
	echo "x is $x"
	sleep 2
	x=$[ $x + 1 ]
done
exit 0

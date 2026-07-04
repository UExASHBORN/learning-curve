#!/bin/bash
trap "echo 'SIGINT is trapped' " SIGINT
num=1
while [ $num -lt 10 ]
do
	echo "Num is $num"
	sleep 2
	num=$[ $num + 1 ]
done
exit 0

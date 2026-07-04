#!/bin/bash
trap "echo 'SIGINT is trapped' " SIGINT
num=1
while [ $num -lt 10 ]
do
	echo "Num is $num" >> processprint.txt
	sleep 2
	num=$[ $num + 1 ]
done
echo "Num is $num" >> processprint.txt
exit 0

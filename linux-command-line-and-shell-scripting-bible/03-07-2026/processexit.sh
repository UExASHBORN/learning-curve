#!/bin/bash
exec 3<> abc.txt
echo "The program is running :"
x=1
while [ $x -lt 10 ]
do
	sleep 1
	x=$[ $x + 1 ]
	echo "script is running $x" > abc.txt
done
3>&-
exit=0

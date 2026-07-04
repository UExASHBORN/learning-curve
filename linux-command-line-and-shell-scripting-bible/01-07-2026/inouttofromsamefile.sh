#!/bin/bash
exec 3<> inputoutput.txt
while read line <&3
do
	echo $line
done
echo "inputoutput from same file executed" >&3
exit 0

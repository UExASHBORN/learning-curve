#!/bin/bash
count=1
while read line
do
	echo $line
	count=$[ $count+1 ]
done < test
echo "Total number of lines: $count"
exit 0

#!/bin/bash
count=1
cat test | while read line
do
	echo $line
	count=$[ $count+1 ]
done
echo "Total number of lines: $count"
exit 0

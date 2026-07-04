#!/bin/bash
exec 0< data.txt
echo "Script is being executed"
while read line
do
	echo $line
done
exit 0

#!/bin/bash
x=0
while IFS= read -r line 
do
	x=$[ $x+1 ]
	if [ $x == 10 ];then
		echo "$line"
	fi
done < linep.txt
exit 0

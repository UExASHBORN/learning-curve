##!/bin/bash
#x=0
#while IFS= read -r line 
#do
#	x=$[ $x+1 ]
#	if [ $x == 10 ];then
#		echo "$line"
#	fi
#done < linep.txt
x=$(head -n 10 < linep.txt | tail -n 1)
echo "$x"
exit 0


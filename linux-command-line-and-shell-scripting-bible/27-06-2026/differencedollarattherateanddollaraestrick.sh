#!/bin/bash
param=${!#}
result=$[ $1+$2+$3+$4 ]
for data in "$*"
do
	echo $data
done
for x in "$@"
do
	echo $x
done
exit 0

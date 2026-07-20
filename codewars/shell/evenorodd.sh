#!/bin/bash
x=$1
if [ $(($x%2)) == 0 ] ; then
	echo "Even"
else
	echo "Odd"
fi


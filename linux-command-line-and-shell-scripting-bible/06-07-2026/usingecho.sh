#!/bin/bash
echodemo() {
	read -p "Enter 2 numbers: " x y
	echo $[ $x + $y ]
	echo $?
}
result=$(echodemo)
echo "$result"
exit 10

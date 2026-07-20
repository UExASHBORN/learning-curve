#!/bin/bash
function myfunction {
	read -p "Enter 1st Numbers : " x y
	return $[ $x+$y ]
}
myfunction
echo $?

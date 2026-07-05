#!/bin/bash
read -p "First side of the triangle: " x
read -p "Second side of the triangle: " y
read -p "Third side of the triangle: " z
if (( 1<=$x && $x<=1000 && 1<=$y && $y<=1000 && 1<=$z && $z<=1000 )) && (( $x+$y>$z && $y+$z>$x && $z+$x>$y )); then
	if (( $x==$y && $y==$z )); then
		echo "EQUILATERAL"
	elif (( $x==$y || $y==$z || $z==$x )); then
		echo "ISOSCELES"
	elif (( $x!=$y && $y!=$z && $z!=$x )); then
		echo "SCALENE"
	fi
fi

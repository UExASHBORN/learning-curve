#!/bin/bash
read -n1 -p "Would you like to continue [Y/N]:" data
case $data in
	Y|y) echo
	echo "your option is yes";;
	N|n) echo
	echo "your option is no";;
	*) echo
	echo "Wrong input";;
esac
exit 0

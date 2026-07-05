#!/bin/bash
read -n1 -p "Input [YES] or [NO]: " input
case $input in
	y|Y) echo "YES";;
	n|N) echo "NO";;
	*) echo "Wrong Input";;
esac
exit 0

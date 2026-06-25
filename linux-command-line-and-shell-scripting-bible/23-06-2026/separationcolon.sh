#!/bin/bash
IFS=$'\n:'
for name in $(cat /etc/passwd)
do
	echo "Fields are $name"
done

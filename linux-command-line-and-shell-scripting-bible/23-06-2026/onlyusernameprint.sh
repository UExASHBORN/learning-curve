#!/bin/bash
IFS=$'\n'
for line in $(cat /etc/passwd); do
	username="${line%%:*}"
	echo "$username"
done

#!/bin/bash
OLD_IFS=$IFS
IFS=$'\n'

for line in $(cat /etc/passwd); do
    username="${line%%:*}"
    echo "$username"
done

IFS=$OLD_IFS

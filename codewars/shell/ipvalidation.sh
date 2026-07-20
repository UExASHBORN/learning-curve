#!/bin/bash
args=$1
echo "$args"
check="([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])"
regex="^${check}\.${check}\.${check}\.${check}$"
if echo "$args" | grep -Eq "$regex" ; then
	echo "True"
else
	echo "False"
fi

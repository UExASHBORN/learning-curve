#!/bin/bash
fl=`"/home/ashborn/mydir"`
if [-e $fl]; then
	echo "Exist"
	if [-d $fl]; then
		echo "is a directory"
	elif [-f $fl]; then
		echo "is a file"
	else
		echo "something else"
	fi
else
	echo "does not exist"
fi
exit 0

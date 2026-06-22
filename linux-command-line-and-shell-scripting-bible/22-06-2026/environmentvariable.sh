\#!/bin/bash
if [ $USER = "ashborn" ]; then
	ls
elif [ $HOME = "/home/ashborn" ]; then
	ls -l
elif [ -n "bash" ]; then
	pwd
else
	top
fi
exit 0

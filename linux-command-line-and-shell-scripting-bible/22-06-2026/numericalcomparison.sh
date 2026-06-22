#!/bin/bash
if [2 -lt 1]; then
	ls
elif [4 -eq 5]; then
	ls -l
elif [10 -ne 20]; then
	ps -el
else
	top
fi
exit 0

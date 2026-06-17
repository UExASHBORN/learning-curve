#!/bin/bash
echo -n "Month calender : "
cal
echo -n "Today's date and time is : "
date
x=10
echo "Value of x = $x"
no_of_files=`ls -1 | wc -l`
echo "Number of files and directory are $no_of_files"

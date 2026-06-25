#!/bin/bash
x=5
case $x in
1) pwd;;
2) ls -l;;
3) ps -el;;
*) echo "case doesn't match";;
esac
exit 0

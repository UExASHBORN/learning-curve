#!/bin/bash
exec 2> execcommanderr.txt
echo "This is first line"
echo "This is second line" >&2
exit 0

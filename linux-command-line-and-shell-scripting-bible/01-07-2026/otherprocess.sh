#!/bin/bash
exec 3> abc.txt
echo "script is being executed" >&3
exit 0

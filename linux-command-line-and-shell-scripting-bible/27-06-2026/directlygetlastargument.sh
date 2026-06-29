#!/bin/bash
param=${!#}
result=$[ $1+$2+$3+$4+$5+$6+$7+$8+$9+${10} ]
	echo "Result = $result"
	echo "Script name = $0"
	echo "Number of arguments = $#"
	echo "Last argument is = $param"
exit 0

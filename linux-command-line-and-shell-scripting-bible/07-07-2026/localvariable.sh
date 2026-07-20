#!/bin/bash
function myfunction {
	local value=$[ $value + 1 ]
	echo "Value = $value"
}
value=20
echo "Value = $value"
myfunction
echo "Value = $value"
exit 0

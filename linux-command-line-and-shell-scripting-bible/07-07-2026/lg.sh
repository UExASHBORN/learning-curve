#!/bin/bash
function myfunction {
	value=$[ $value + 1 ]
}
value=20
echo "Value = $value"
myfunction
echo "Value = $value"
exit 0

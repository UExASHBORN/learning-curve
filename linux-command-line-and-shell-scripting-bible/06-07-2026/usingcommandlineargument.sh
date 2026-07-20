#!/bin/bash
echodemo() {
	echo $[ $1 + $2 ]
}
result=$(echodemo 100 200)
echo "$result"
exit 10

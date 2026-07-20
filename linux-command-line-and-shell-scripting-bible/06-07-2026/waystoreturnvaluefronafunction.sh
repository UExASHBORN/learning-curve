#!/bin/bash
abc() {
	ls
	echo $?
}
abc
exit 120

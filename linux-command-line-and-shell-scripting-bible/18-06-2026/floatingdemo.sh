#!/bin/bash
a=10.32
b=5.798
c=$(echo "scale=4 ; $a + $b" | bc)
echo "Result = $c"

#!/bin/bash
expr 2 + 5
sum=$(expr 2 + 5)
echo "sum = $sum"
expr 2 \* 5
mul=$[2 * 5]
echo "mul = $mul"
expr 2.5 + 2.7
mx=$[2.5*3.7]
echo "mx = $mx"

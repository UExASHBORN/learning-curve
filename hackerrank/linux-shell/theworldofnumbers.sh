#!/bin/bash
read -p "Input your first number: " x
read -p "Input your second number: " y
expr $x + $y ; echo -n "$expr"
expr $x - $y ; echo -n "$expr"
expr $x \* $y ; echo -n "$expr"
expr $x / $y ; echo -n "$expr"
exit 0

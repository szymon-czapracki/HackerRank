#!/bin/bash

read number1
read number2

if [ $((number1)) -eq $((number2)) ]; then
    echo "X is equal to Y"
elif [ $((number1)) -gt $((number2)) ]; then
    echo "X is greater than Y"
elif [ $((number1)) -lt $((number2)) ]; then
    echo "X is less than Y"
fi

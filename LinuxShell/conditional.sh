#!/bin/bash

read input

if [ "$input" = "y" -o "$input" = "Y" ]; then
    echo "YES"
elif [ "$input" = "n" -o "$input" = "N" ]; then
    echo "NO"
fi

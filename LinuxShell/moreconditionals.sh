#!/bin/bash

read X
read Y
read Z

if [ "$X" -ne "$Y" ] && [ "$Y" -ne "$Z" ]; then
    echo "SCALENE"
elif [ "$X" -eq "$Y" ] && [ "$Y" -eq "$Z" ]; then
    echo "EQUILATERAL"
elif [ "$X" -eq "$Y" ] || [ "$X" -eq "$Z" ] || [ "$Y" -eq "$Z" ]; then
    echo "ISOSCELES"
fi


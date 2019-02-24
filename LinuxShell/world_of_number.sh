#!/bin/bash

read first_number
read second_number

ans=$(( first_number + second_number ))
echo "$ans"
ans1=$(( first_number - second_number ))
echo "$ans1"
ans2=$(( first_number * second_number ))
echo "$ans2"
ans3=$(( first_number / second_number ))
echo "$ans3"

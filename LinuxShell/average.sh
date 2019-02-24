#!/bin/bash

read loop_size
counter=1
sum=0

while [ $counter -le $loop_size ]
do
    read temp_input
    let "sum+=temp_input"
    ((counter++))
done

printf "%.3f" $(echo $sum/$loop_size | bc -l)




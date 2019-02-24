#!/bin/bash

counter=1
while [ $counter -le 99 ]
do
    if [ $((counter%2)) -ne 0 ];
    then
        echo $counter
    fi
    ((counter++))
done

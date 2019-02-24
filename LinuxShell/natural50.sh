#!/bin/bash

counter=1
while [ $counter -le 50 ]
    do
        echo $counter
        ((counter++))
    done

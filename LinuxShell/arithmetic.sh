#!/bin/bash

read input
echo $input | bc -l | xargs printf "%.3f"   #xargs is for input management
                                            #with xargs we can modify looks of output

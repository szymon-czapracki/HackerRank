/**
 * HackerRank IPK Arrays Left rotation
 * main.cpp
 * Purpose:  To rotate give array to the left
 *
 * @author Szymon Czapracki
 * @version 1.0 17/02/2019
 */

#include <iostream>
#include <vector>
#include "Array.h"

/* General operations */
int main() {

    Array_to_rotate array1;

    array1.set_size();
    array1.set_shift();
    array1.fill_to_shift();
    array1.shift_array();
    array1.print_array();

    return 0;
}


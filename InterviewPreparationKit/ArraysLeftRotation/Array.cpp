#include "Array.h"
#include <iostream>

/* Setting array size from user input */
void Array_to_rotate::set_size() {

    int size_input{0};

    std::cin >> size_input;
    this->size = size_input;
}

/* Setting shift counter from user input */
void Array_to_rotate::set_shift() {

    int shift_input{0};

    std::cin >> shift_input;
    this->shift = shift_input;
}

/* Filling array with values from user input */
void Array_to_rotate::fill_to_shift() {
    for (auto i = 0; i < size; i++) {
        int temp_input;
        std::cin >> temp_input;
        to_shift.push_back(temp_input);
    }
}

/* Shifting values in array */
void Array_to_rotate::shift_array() {

    std::vector<int>::const_iterator first = to_shift.begin();
    std::vector<int>::const_iterator last = to_shift.begin() + shift;
    std::vector<int> temp_vector(first, last);
    to_shift.erase(to_shift.begin(), to_shift.begin() + shift);
    to_shift.insert(to_shift.end(), temp_vector.begin(), temp_vector.end());
}

/* Printing array */
void Array_to_rotate::print_array() {
    for (auto val : to_shift) {
        std::cout << val << " ";
    }

    std::cout << "\n";
}

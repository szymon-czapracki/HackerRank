#ifndef ARRAY_H_
#define ARRAY_H_

#include <vector>

/* Array for rotation class */
class Array_to_rotate {
    private:
        int size{0};                    // Array size
        int shift{0};                   // Rotation count
        std::vector<int> to_shift;      // Original array to shift
        std::vector<int> temp_vector;   // Temporary array with values to shift
    public:
        Array_to_rotate() {}            // Class constructor
        ~Array_to_rotate() {}           // Class destructor

        /* Fill array with values */
        void fill_to_shift();

        /* Shift array */
        void shift_array();

        /* Set array size */
        void set_size();

        /* Set shift value */
        void set_shift();

        /* Print array */
        void print_array();
};

#endif

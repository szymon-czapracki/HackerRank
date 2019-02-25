#ifndef TESTCASE_H_
#define TESTCASE_H_
#include <iostream>
#include <vector>
#include <algorithm>

class Test_case {
    private:
        std::vector<int> test_array;            // Array of ints to test
        int array_size{0};                      // Array size
        int swaps{0};                           // Number of swaps (result)
    public:
        Test_case();
        Test_case(int size);
        ~Test_case();
        Test_case(const Test_case &other);
    public:
        void fill_test_array();
        int count_swaps();
        void print_swaps();
};

#endif //TESTCASE_H_

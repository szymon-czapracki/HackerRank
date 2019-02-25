#include <iostream>
#include <vector>
#include <algorithm>
#include "TestCase.h"

/* General operations */
int main() {

    Test_case test;
    test.fill_test_array();
    test.count_swaps();
    test.print_swaps();

    return 0;
}

#include "TestCase.h"

Test_case::Test_case() {

}

Test_case::Test_case(int size) : array_size(size) {

}

Test_case::~Test_case() {

}

Test_case::Test_case(const Test_case &other) {

    array_size = other.array_size;
    test_array = other.test_array;
}

/*
 * Populate test_array with user input
 */
void Test_case::fill_test_array() {

    std::cin >> array_size;
    for (auto i = 0; i < array_size; ++i) {
        int temp_input{0};
        std::cin >> temp_input;
        test_array.push_back(temp_input);
    }
}

/*
 * Count swaps necessary to sort array
 */
int Test_case::count_swaps() {

    for (auto i = 0; i < array_size; ++i) {
        if (test_array.at(i) == i + 1) {
            continue;
        } else {
            std::vector<int>::iterator it = std::find(test_array.begin() + i,
                                            test_array.end(), i + 1);
            int index = std::distance(test_array.begin(), it);
            std::swap(test_array.at(i), test_array.at(index));
            swaps++;
        }
    }
    return swaps;
}

/*
 * Print total number of swaps
 */
void Test_case::print_swaps() {
    std::cout << swaps << "\n";
}

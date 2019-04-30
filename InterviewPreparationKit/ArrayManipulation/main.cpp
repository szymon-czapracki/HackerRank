#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    long int array_size = 0;
    long int num_of_operations = 0;
    long int left_index = 0;
    long int right_index = 0;
    long int summand = 0;

    std::cin >> array_size;
    std::cin >> num_of_operations;

    std::vector<long int> array(array_size, 0);

    for (long int i = 0; i < num_of_operations; ++i) {
        std::cin >> left_index;
        std::cin >> right_index;
        std::cin >> summand;
        for (long int i = (left_index - 1); i < right_index; ++i) {
            array.at(i) += summand;
        }
    }

    std::cout << *std::max_element(array.begin(), array.end()) << "\n";

    return 0;
}
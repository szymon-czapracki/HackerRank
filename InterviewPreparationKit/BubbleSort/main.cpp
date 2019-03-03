/**
 * HackerRank IPK Warm-up Counting Valleys
 * main.cpp
 * Purpose: To calculate valleys in given path schema.
 *
 * @author Szymon Czapracki
 * @version 1.0 12/01/2018
 */
#include <iostream>
#include <vector>

/**
 * Structure for result of the program.
 * @member1 number of swaps made by bubble sort
 * @member2 first element of sorted array
 * @member3 last element of sorted array
 */
struct Result {
    int number_of_swaps = 0;
    int first_element = 0;
    int last_element = 0;

    /**
     * Bubble sort
     * @param1 array of ints to sort
     * @param2 size of an array
     */
    void bubble_sort(std::vector<int> array, int array_size) {

        for (int i = 0; i < array_size; i++) {
            for (int j = 0; j < array_size - 1; j++) {
                if (array.at(j) > array.at(j + 1)) {
                    std::swap(array[j], array[j+1]);
                    number_of_swaps++;
                }
                last_element = array.at(j + 1);
            }
        }
        first_element = array.at(0);
    }
};

/** Input handling and general operations */
int main()
{
    int array_size = 0;
    std::vector<int> array;

    std::cin >> array_size;

    for (int i = 0; i < array_size; i++)
    {
        int temp_value;
        std::cin >> temp_value;
        array.push_back(temp_value);
    }

    Result res;
    res.bubble_sort(array, array_size);
    std::cout << "Array is sorted in " << res.number_of_swaps << " swaps." << '\n';
    std::cout << "First Element: " << res.first_element << '\n';
    std::cout << "Last Element: " << res.last_element << '\n';

    return 0;
}

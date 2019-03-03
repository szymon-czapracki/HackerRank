/**
 * HackerRank IPK Warm-up Counting Valleys
 * main.cpp
 * Purpose: To calculate valleys in given path schema.
 *
 * @author Szymon Czapracki
 * @version 1.0 9/01/2019
 */
#include <iostream>
#include <vector>
#include <string>

/** Function to calculate occurances of valleys in given path
 * @param vector of integers
 * @return number of valleys
 */
int calculate_valleys(std::vector<int> path) {

    int valley_counter;

    for (unsigned int i = 1; i < path.size(); i++) {
        if (path.at(i) == 0 && path.at(i - 1) == -1) {      // If previous value is -1 and current is 0 this means that
            valley_counter++;                               // there was a valley.
        }
    }
    return valley_counter;
}

/** Input handling and general operations */
int main()
{
    std::vector<int> valley_control;
    char step;
    int path_size = 0;
    int control = 0;

    std::cin >> path_size;

    for (int i = 0; i < path_size; i++) {
        std::cin >> step;
        if (step == 'D') {
            control--;
        } else {
            control++;
        }
        valley_control.push_back(control);
    }

    std::cout << calculate_valleys(valley_control) << '\n';

    return 0;
}

/**
 * HackerRank IPK Warm-up Sock Merchant
 * main.cpp
 * Purpose: To calculate pairs of integers in given array.
 *
 * @author Szymon Czapracki
 * @version 1.0 6/01/2018
 */

#include <iostream>
#include <vector>
#include <algorithm>

/**
 * Calculates pairs from given vector
 *
 * @param vector of integers
 * @return number of pairs
 */
int count_pairs(std::vector<int> socks) {

    int occurence = 0;
    int control = 0;
    int erase_temp = 0;
    int overall_occurence = 0;

    while (socks.size() != 0) {
        occurence = 0;
        control = socks.at(0);

        for (unsigned int j = 0; j < socks.size(); j++) {
            if (control == socks.at(j)) {
                occurence++;
            }
        }

        if (occurence % 2 == 0) {                                           // If there is even number of pairs
            overall_occurence = overall_occurence + (occurence / 2);
        } else {                                                            // If the number of pairs is uneven
            overall_occurence = overall_occurence + ((occurence - 1) / 2);
        }

        erase_temp = socks.at(0);
        socks.erase(std::remove(socks.begin(), socks.end(), erase_temp) ,   // Remove already checked elements
                    socks.end());
    }

    return overall_occurence;
}

// Controls operation of the program
int main() {

    int temp_vector_input = 0;
    unsigned int vector_size = 0;
    std::vector<int> socks;

    std::cin >> vector_size;

    for (unsigned int i = 0; i < vector_size; i++) {
        std::cin >> temp_vector_input;
        socks.push_back(temp_vector_input);
    }

    std::cout << count_pairs(socks) << std::endl;

    return 0;
}
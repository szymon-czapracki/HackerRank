/**
 * HackerRank IPK Warm-up Repeated String
 * main.cpp
 * Purpose: To calculate the occurances of letter 'a' in string.
 *
 * @author Szymon Czapracki
 * @version 1.0 12/01/2018
 */
#include <iostream>
#include <string>

/** Function to calculate occurances of 'a' in substring
 * @param string to check
 * @return number of letters 'a' in string
 */
int substring_a_ocuurances(std::string substring) {

    int sub_num_of_a = 0;

    for (unsigned int i = 0; i < substring.length(); i++) {
        if (substring.at(i) == 'a') {
            sub_num_of_a++;
        }
    }
    return sub_num_of_a;
}

/** Function to calcualte occurances of 'a' in main string
 * @param1 string to check
 * @param2 main string size
 * @return number of letters 'a' in main string
 */
long int calculate_occurances(std::string substring, long int num_of_chars) {

    long int overall_num_of_a = 0, full_occurence = 0;
    int sub_num_of_a = substring_a_ocuurances(substring);
    int str_size = substring.length();
    int border_size = 0;

    full_occurence = num_of_chars / str_size;
    overall_num_of_a = full_occurence * sub_num_of_a;
    border_size = num_of_chars % str_size;

    if (border_size != 0) {
        for (auto i = 0; i < border_size; i++) {
            if (substring.at(i) == 'a') {
                overall_num_of_a++;
            }
        }
    }
    return overall_num_of_a;
}

/** Input handling and general operations */
int main()
{
    std::string input_string;
    long int num_of_chars = 0;

    std::cin >> input_string;
    std::cin >> num_of_chars;

    std::cout << calculate_occurances(input_string, num_of_chars) << '\n';

    return 0;
}
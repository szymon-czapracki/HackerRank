/**
 * HackerRank Cpp Makinga anagrams.
 * main.cpp
 * Purpose: To solve challenge with making palindromes.
 *
 * @author Szymon Czapracki
 * @version 1.0 12/01/2018
 */
#include <iostream>
#include <string>
#include <vector>

int main() {

    int deletions = 0;

    std::string string_one;
    std::string string_two;

    /* Vectors to store character occurances */
    std::vector<int> string1_alphabet(26, 0);
    std::vector<int> string2_alphabet(26, 0);

    /* Input handling */
    std::getline(std::cin, string_one);
    std::getline(std::cin, string_two);

    /* Scan the first string, and put the number
     * of occurances into matching position in
     * alphabet vector
     */
    for (int i = 0; i < (int)string_one.size(); i++) {
        string1_alphabet.at(string_one.at(i) - 'a')++;
    }

    /* Same as before but input is into second string */
    for (int i = 0; i < (int)string_two.size(); i++) {
        string2_alphabet.at(string_two.at(i) - 'a')++;
    }

    std::cout << "String1: " << string_one << '\n';
    std::cout << "String2: " << string_two << '\n';

    /* Pring first alphabet string */
    for (auto i : string1_alphabet) {
        std::cout << i << " ";
    }

    std::cout << '\n';

    /* Print second alphabet string */
    for (auto i : string2_alphabet) {
        std::cout << i << " ";
    }
    std::cout << '\n';

    /* Compare two alphabet strings
     * The difference at each position
     * is added to deletions variable.
     */
    for (int i = 0; i < 26; i++) {
        if (string1_alphabet.at(i) != string2_alphabet.at(i)) {
            deletions += std::abs(string1_alphabet.at(i) - string2_alphabet.at(i));
        }
    }

    /* Print deletions */
    std::cout << "Deletions: " << deletions << '\n';

    return 0;
}

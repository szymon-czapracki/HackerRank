/**
 * HackerRank IPK Warm-up Mark and Toys
 * main.cpp
 * Purpose: To calculate how many items
 *          from vector can we sum until the limit
 *          is reached.
 *
 * @author Szymon Czapracki
 * @version 1.0 12/01/2018
 */
#include <iostream>
#include <vector>
#include <algorithm>

/** Function to calculate the highest possible sum
 *  of prices before exceeding the limit.
 *
 * @param1 limit
 * @param2 vector of prices
 * @return number of items added up
 */
int how_many_toys(int mark_funds, std::vector<int> prices) {

    int overall_price = 0, i = 0;

    std::sort(prices.begin(), prices.end());

    while (overall_price <= mark_funds) {
        overall_price += prices.at(i);
        if (overall_price <= mark_funds) {
            i++;
        }
    }
    return i;
}

/** Input handling and general options */
int main()
{
    int num_of_toys = 0, mark_funds = 0, i = 0;
    std::vector<int> prices;

    std::cin >> num_of_toys;
    std::cin >> mark_funds;

    for (int j = 0; j < num_of_toys; j++) {
        int temp_input;
        std::cin >> temp_input;
        prices.push_back(temp_input);
    }

    std::cout << how_many_toys(mark_funds, prices) << '\n';

    return 0;
}
/**
 * HackerRank IPK Warm-up Jumping on the Clouds
 * main.cpp
 * Purpose: To solve a game where goal is to jump to next position.
 *
 * @author Szymon Czapracki
 * @version 1.0 12/01/2018
 */
#include <iostream>
#include <vector>

/** Function to calculate jumps needed to solve a game
 * @param vector of integers (of zeroes and ones, one indicates forbidden jump)
 * @return number of jumps
 */
int jump_clouds(std::vector<int> clouds) {

    int jumps = 0;

    while (clouds.size() != 1) {
        if (clouds.size() > 2 && clouds.at(2) == 0) {           // If vector has proper size, and double jump is possible
            clouds.erase(clouds.begin(), clouds.begin() + 2);   // make the jump and trim the vector.
            jumps++;
        } else {
            clouds.erase(clouds.begin());                       // As above, but this time only single jump is possible.
            jumps++;
        }
    }
    return jumps;
}

/** Input handling and general options */
int main()
{
    std::vector<int> clouds;
    int clouds_size;

    std::cin >> clouds_size;

    for (int i = 0; i < clouds_size; i++)
    {
        int temp_value;
        std::cin >> temp_value;
        clouds.push_back(temp_value);
    }

    std::cout << jump_clouds(clouds) << std::endl;

    return 0;
}
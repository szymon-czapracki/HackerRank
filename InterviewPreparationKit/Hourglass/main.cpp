/**
 * HackerRank IPK Arrays Hourglass
 * main.cpp
 * Purpose:  To find hourglass with maximum sum
 *
 * @author Szymon Czapracki
 * @version 1.0 17/02/2018
 */
#include <iostream>
#include <vector>
#include <algorithm>

/* Hourglass class */
class Hourglass {
    private:
        int height{6};              // Matrix height
        int width{6};               // Matrix width
        int hourglass_sum{0};       // Hourglass values sum
        int max_val{0};             // Vector of sums max value
        std::vector<std::vector<int> > hourglass_array;
        std::vector<int> hourglass_sums;
    public:
        Hourglass() {
            hourglass_array.resize(height);
            for (auto i = 0; i < width; ++i) {
                hourglass_array[i].resize(width);
            }
        }
        ~Hourglass() {}
        int calculate_hourglass();
        int get_max_hourglass();
        void fill_vector();
};

/*
 * Filling hourglass vector of Hourglass object with user input
 */
void Hourglass::fill_vector() {

    for (auto i = 0; i < 6; ++i) {
            hourglass_array[i].resize(6);
            for (auto j = 0; j < 6; ++j) {
                std::cin >> hourglass_array[i][j];
            }
        }
}

/*
 * Getting maximum value from hourglass sums vector
 * @return: maximum value
 */
int Hourglass::get_max_hourglass() {

     int max_val = *std::max_element(hourglass_sums.begin(),
                                        hourglass_sums.end());

     return max_val;
}

/*
 * Calculating sum of each hourglass and putting it into sums vector
 * @return: maximum value from sums vector
 */
int Hourglass::calculate_hourglass() {

    height = 0;
    width = 0;

    while (height <= 3) {
        width = 0;
        while (width <= 3) {
            hourglass_sum +=    hourglass_array[height][width]              // Top row addition
                                + hourglass_array[height][width + 1]
                                + hourglass_array[height][width + 2];

            hourglass_sum +=    hourglass_array[height + 1][width + 1];     // Middle row addition

            hourglass_sum +=    hourglass_array[height + 2][width]          // Bottom row addition
                                + hourglass_array[height + 2][width + 1]
                                + hourglass_array[height + 2][width + 2];

            ++width;                                                        // Next vertical hourglass
            hourglass_sums.push_back(hourglass_sum);                        // Push sum into vector of sums
            hourglass_sum = 0;
        }
        ++height;                                                           // Next horizontal hourglass
    }
    return get_max_hourglass();
}

/* General operations */
int main() {

    Hourglass hourglass_matrix;
    hourglass_matrix.fill_vector();
    std:: cout << hourglass_matrix.calculate_hourglass() << "\n";

    return 0;
}


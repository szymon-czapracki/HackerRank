/**
 * HackerRank IPK Fraudulent Activity Notification
 * main.cpp
 * Purpose: To solve challenge with bank activity problem
 *
 * @author Szymon Czapracki
 * @version 1.0 21/01/2018
 */
#include <iostream>
#include <vector>
#include <algorithm>

/* Function to calculate notifications
 * @param1 Vector of expenditure values
 * @param2 Idle days
 * @return Number of notifications
 */
int count_notifications(std::vector<int> expenditure, int d) {

    int notifications = 0;

    /* Creating vector of idle days to get median from */
    std::vector<int> temp_vector(expenditure.begin(), expenditure.begin() + d);

    /** Sorting the ependiture vector */
    std::sort(temp_vector.begin(), temp_vector.end());

    for (int i = d; i < (int)expenditure.size(); i++) {

        float temp1;

        /* First iteration */
        if (i == d) {
            if (temp_vector.size() % 2 == 0) {
                temp1 = ((float)temp_vector[temp_vector.size() / 2 - 1] +
                        temp_vector[temp_vector.size() / 2] / 2);
            } else {
                temp1 = temp_vector[temp_vector.size() / 2];
            }
        /* Later iterations */
        } else {
            /* Looking for a place to store new value
             * We place the new value inside of the vector instead
             * of getting the vector and sorting it again
             */
            auto place = std::lower_bound(temp_vector.begin(), temp_vector.end(), expenditure[i - d - 1]);
            temp_vector.erase(place);
            temp_vector.insert(std::upper_bound(temp_vector.begin(), temp_vector.end(), expenditure[i - 1]), expenditure[i - 1]);
            if (temp_vector.size() % 2 == 0) {
                temp1 = ((float)(temp_vector[temp_vector.size() / 2 - 1] + temp_vector[temp_vector.size() / 2 ]) / 2);
            } else {
                temp1 = temp_vector[temp_vector.size() / 2];
            }
        }
        /* Check if spend money is more then median from expenditure */
        if (expenditure[i] >= (2 * temp1)) {
            notifications++;
        }
    }
    return notifications;
}

/* General options IO handling */
int main() {

    long int total_days = 0, idle_days = 0;
    std::vector<int> tran_data;

    std::cin >> total_days;
    std::cin >> idle_days;

    for (auto i = 0; i < total_days; i++) {
        int temp_input;
        std::cin >> temp_input;
        tran_data.push_back(temp_input);
    }

    std::cout << count_notifications(tran_data, idle_days) << std::endl;

    return 0;
}

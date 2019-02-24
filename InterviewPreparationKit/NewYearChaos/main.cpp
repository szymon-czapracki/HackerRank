#include "Queue.h"

/* General operations */
int main() {

    /* Test cases */
    int queues{0};

    /* Size of test */
    int queue_size{0};

    /* Vector of queue objects */
    std::vector<Queue> new_year_queues;

    /* Vector of answers */
    std::vector<std::string> answers;

    std::cin >> queues;

    for (int i = 0; i < queues; ++i) {
        std::cin >> queue_size;
        new_year_queues.push_back(Queue(queue_size));
        for (int j = 0; j < queue_size; j++) {
            int temp_input{0};
            std::cin >> temp_input;
            new_year_queues[i].add_to_queue(temp_input);
        }
    }

    /*
     * Checking every object in array and writing result of test case into
     * answers vector
     */
    for (int i = 0; i < queues; ++i) {
        if (new_year_queues[i].check_valid_queue()) {
            answers.push_back("Too chaotic");
        } else {
            answers.push_back(new_year_queues[i].count_bribes());
        }
    }

    /* Printing answers */
    for (auto answer : answers) {
        std::cout << answer << "\n";
    }

    return 0;
}

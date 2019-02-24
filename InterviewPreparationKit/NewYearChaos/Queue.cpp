#include "Queue.h"
#include "MergeSort.h"

/*
 * Checking if queue is valid
 * @return true(if queue is invalid) false(if queue is valid)
 */
bool Queue::check_valid_queue() {

    for (int i = 0; i < queue_size; ++i) {
        if ((end_state.at(i) - i) > 3) {
            return true;
        }
    }
    return false;
}

/*
 * Counting bribes using merge sort
 * @return string representing number of bribes
 */
std::string Queue::count_bribes() {

    int bribes = merge_sort(end_state);

    std::string bribes_str = std::to_string(bribes);

    return bribes_str;
}

/*
 * Adding numbers to Queue object vector.
 */
void Queue::add_to_queue(int person) {
    end_state.push_back(person);
}

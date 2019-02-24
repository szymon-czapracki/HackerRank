#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
#include <vector>

/* Single queue object */
class Queue {

    private:
        int queue_size;
        std::vector<int> end_state;
    public:
    Queue() {}
    Queue(int size) : queue_size(size) {}
    Queue(const Queue &obj) :   queue_size(obj.queue_size),
                                end_state(obj.end_state) {}
    ~Queue() {}

    /* Check if any member moved more than 2 places */
    bool check_valid_queue();

    /* Count bribes in queue */
    std::string count_bribes();

    /* Add numbers to queue */
    void add_to_queue(int number);
};

#endif

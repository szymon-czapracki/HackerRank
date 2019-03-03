#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> vector_of_ints) {

    for (auto it = vector_of_ints.rbegin(); it != vector_of_ints.rend(); it++) {
        cout << *it << " ";
    }

}

int main() {

    int vector_size;
    int integer_input;

    cin >> vector_size;

    vector<int> integers;

    for (int i = 0; i < vector_size; i++) {
        cin >> integer_input;
        integers.push_back(integer_input);
    }

    print_vector(integers);

}
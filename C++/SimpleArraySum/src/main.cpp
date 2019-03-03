#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <limits>

using namespace std;

int simpleArraySum(vector<int> ar) {

    int temp_value = 0;

    for (auto i : ar) {
        temp_value += i;
    }

    return temp_value;
}

int main() {

    int num_of_inputs, temp_value;
    string input_string;
    vector<int> vector_of_ints;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    getline(cin, input_string);

    istringstream is(input_string);

    while (is >> temp_value) {
        vector_of_ints.push_back(temp_value);
    }

    cout << simpleArraySum(vector_of_ints) << endl;

}
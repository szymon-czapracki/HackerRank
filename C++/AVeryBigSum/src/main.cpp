#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    long long temp_value;
    string input_string;
    vector<long long> vector_of_ints;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    getline(cin, input_string);

    istringstream is(input_string);

    while (is >> temp_value) {
        vector_of_ints.push_back(temp_value);
    }

    temp_value = 0;

    for (unsigned i = 0; i < vector_of_ints.size(); i++) {
        temp_value += vector_of_ints.at(i);
    }

    cout << temp_value << endl;
}
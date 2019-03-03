#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int closest_value(vector<int> *input_vector, int search_value) {

    int index;

    auto it = lower_bound(input_vector->begin(), input_vector->end(), search_value);
    index = distance(input_vector->begin(), it);

    return index + 1;
}

int lower_bound_search(vector<int> *input_vector, int search_value) {

    int index;

    auto it = lower_bound(input_vector->begin(), input_vector->end(), search_value);
    index = distance(input_vector->begin(), it);
    if (it == input_vector->end() || input_vector->at(index) != search_value) {
        return -1;
    } else {
        return index + 1;
    }
}

void search_in_vec(vector<int> *input_vector, int search_value, vector<string>* out_answers) {

    string temp_string;
    int control = lower_bound_search(input_vector, search_value);

    if (control != -1) {
        temp_string = "Yes " + to_string(control);
        out_answers->push_back(temp_string);
    } else {
        temp_string = "No " + to_string(closest_value(input_vector, search_value));
        out_answers->push_back(temp_string);
    }
}

int main() {

    int vector_size, temp_val, num_of_queries;
    vector<int> vec_of_vals;
    vector<string> out_answers;

    cin >> vector_size;

    for (int i = 0; i < vector_size; i++) {
        cin >> temp_val;
        vec_of_vals.push_back(temp_val);
    }

    sort (vec_of_vals.begin(), vec_of_vals.end());
    cin >> num_of_queries;

    for (int i = 0; i < num_of_queries; i++) {
        cin >> temp_val;
        search_in_vec(&vec_of_vals, temp_val, &out_answers);
    }

    for (auto i : out_answers) {
        cout << i << endl;
    }

    return 0;
}
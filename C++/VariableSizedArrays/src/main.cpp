#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num_of_arrays, num_of_queries, array_size, input_value;
    int array_number, array_element;
    
    cin >> num_of_arrays;
    cin >> num_of_queries;

    vector< vector<int> > matrix(num_of_arrays, vector<int>(0,0));
    vector<int> query_and_info;

    for (int i = 0; i < num_of_arrays; i++) {
        cin >> array_size;
        for (int j = 0; j < array_size; j++) {
            cin >> input_value;
            matrix[i].push_back(input_value);
        }
    }

    for (int i = 0; i < num_of_queries; i++) {
        cin >> array_number;
        cin >> array_element;
        query_and_info.push_back(array_number);
        query_and_info.push_back(array_element);
    }

    for (unsigned int i = 0; i < query_and_info.size() - 1; i = i + 2) {
        cout << matrix[query_and_info.at(i)].at(query_and_info.at(i + 1));
        cout << endl;
    }
}
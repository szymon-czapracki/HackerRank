#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int vec_size, temp_value;
    vector<int> vec_of_values;

    cin >> vec_size;

    for (int i = 0; i < vec_size; i++) {
        cin >> temp_value;
        vec_of_values.push_back(temp_value);
    }

    sort (vec_of_values.begin(), vec_of_values.end());

    for (auto i : vec_of_values) {
        cout << i << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int vector_size, erase_pos, min_range, max_range, temp_value;
    vector<int> vec_of_vals;

    cin >> vector_size;

    for (int i = 0; i < vector_size; i++) {
        cin >> temp_value;
        vec_of_vals.push_back(temp_value);
    }

    cin >> erase_pos;
    erase_pos = erase_pos - 1;

    cin >> min_range >> max_range;
    min_range = min_range - 1;
    max_range = max_range -1;

    vec_of_vals.erase(vec_of_vals.begin() + erase_pos);

    vec_of_vals.erase(vec_of_vals.begin() + min_range, vec_of_vals.begin() +          max_range);

    cout << vec_of_vals.size() << endl;

    for (auto i : vec_of_vals) {
        cout << i << " ";
    }
}
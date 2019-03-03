#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {

    int num_of_queries;
    int temp_value;
    vector<string> answers;

    set<int> my_set;

    cin >> num_of_queries;

    for (int i = 0; i < num_of_queries; i++) {
        cin >> temp_value;
        switch(temp_value) {
            case 1:
                cin >> temp_value;
                my_set.insert(temp_value);
            break;
            case 2:
                cin >> temp_value;
                my_set.erase(temp_value);
            break;
            case 3:
                cin >> temp_value;
                auto search = my_set.find(temp_value);
                if (search != my_set.end()) {
                    answers.push_back("Yes");
                } else {
                    answers.push_back("No");
                }
            break;
        }
    }
    for (auto i : answers) {
        cout << i << endl;
    }
}
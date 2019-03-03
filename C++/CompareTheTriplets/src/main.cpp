#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <vector>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {

    int a_score = 0;
    int b_score = 0;
    vector<int> final_scores;

    for (int i = 0; i < (int)3; i++) {
       if (a.at(i) > b.at(i)) {
           a_score++;
       } else if (a.at(i) < b.at(i)) {
           b_score++;
       } else if (a.at(i) == b.at(i)) {
           continue;
       }
    }

    final_scores.push_back(a_score);
    final_scores.push_back(b_score);

    return final_scores;

}

int main() {

    int temp_value;

    string alice_score_string;
    string bob_score_string;

    vector<int> alice_scores;
    vector<int> bob_scores;

    getline(cin, alice_score_string);
    getline(cin, bob_score_string);

    istringstream is(alice_score_string);

    while (is >> temp_value) {
        alice_scores.push_back(temp_value);
    }

    istringstream is2(bob_score_string);

    while (is2 >> temp_value) {
        bob_scores.push_back(temp_value);
    }

    vector<int> final = compareTriplets(alice_scores, bob_scores);

    for (auto i : final) {
        cout << i << " ";
    }

    return 0;
}
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    
    vector<int> temp_vector;
    string token;
    istringstream ss(str);
    while(getline(ss, token, ',')) {
        temp_vector.push_back(atoi(token.c_str()));
    }
    return temp_vector;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    
    string input_string1, input_string2;

    cin >> input_string1 >> input_string2;
    cout << input_string1.size() << " " << input_string2.size() << endl;
    cout << input_string1 + input_string2 << endl;

    char temp = input_string1[0];
    input_string1[0] = input_string2[0];
    input_string2[0] = temp; 
    cout << input_string1 << " " << input_string2 << endl;
    
    return 0;
}
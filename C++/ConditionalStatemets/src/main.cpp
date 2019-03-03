#include <iostream>

using namespace std;

int main() {

    int input_value;
    cin >> input_value;
    
    if (input_value > 9) {
        cout << "Greater than 9" << endl;
    }
    else {
        switch(input_value) {
            case(1):
                cout << "one" << endl;
                break;
            case(2):
                cout << "two" << endl;
                break;
            case(3):
                cout << "three" << endl;
                break;
            case(4):
                cout << "four" << endl;
                break;
            case(5):
                cout << "five" << endl;
                break;
            case(6):
                cout << "six" << endl;
                break;
            case(7):
                cout << "seven" << endl;
                break;
            case(8):
                cout << "eight" << endl;
                break;
            case(9):
                cout << "nine" << endl;
                break;
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

void print_even_odd(bool type) {
    if(type) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
}

void print_value_name(int value) {
    
    switch(value) {
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

bool even_or_odd(int value) {
    if(value % 2 == 0) {
        return true;
    }
    else
        return false;
}

void handle_input_value(int min_value, int max_value) {
    
    for (int i = min_value; i <= max_value; i++) {
        if (i >= 1 && i <= 9) {
            print_value_name(i);
        }
        else {
            print_even_odd(even_or_odd(i));
        }
    }
}


int main() {

    int max_value, min_value;

    cin >> min_value;
    cin >> max_value;

    handle_input_value(min_value, max_value);
    
    return 0;
}
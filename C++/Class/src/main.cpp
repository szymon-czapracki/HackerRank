#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Student {

    private:
        int age, standard;
        string first_name;
        string last_name;
    public:
        
        void set_age(int age_input) {
            age = age_input;
        }
        int get_age() {
            return age;
        }

        void set_first_name(string fname_input) {
            first_name = fname_input;
        }
        string get_first_name() {
            return first_name;
        }

        void set_last_name(string lname_input) {
            last_name = lname_input;
        }
        string get_last_name() {
            return last_name;
        }

        void set_standard(int stand_input) {
            standard = stand_input;
        }
        int get_standard() {
            return standard;
        }

        string to_string_own() {
            return to_string(age) + ',' + first_name + ',' + last_name + ',' + to_string(standard);
        }
};

int main() {

    int age_input, stand_input;
    string fname_input, lname_input;

    cin >> age_input >> fname_input >> lname_input >> stand_input;
    
    Student ex_student;
    ex_student.set_age(age_input);
    ex_student.set_first_name(fname_input);
    ex_student.set_last_name(lname_input);
    ex_student.set_standard(stand_input);

    cout << ex_student.get_age() << "\n";
    cout << ex_student.get_last_name() << ", " << ex_student.get_first_name() << "\n";
    cout << ex_student.get_standard() << "\n";
    cout << "\n";
    cout << ex_student.to_string_own();
}
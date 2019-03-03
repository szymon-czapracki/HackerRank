#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Rectangle {
public:
    int width, height;
    void display() {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle  {
    private:
        string input_string;
        vector<int> rect_values;
        int temp_value;
    public:
        void read_input() {
            getline(cin, input_string);
            stringstream iss(input_string);
            while (iss >> temp_value)
                rect_values.push_back(temp_value);
            width = rect_values.at(0);
            height = rect_values.at(1);
        }
        void display() {
            cout << rect_values.at(0) * rect_values.at(1) << endl;
        }
};

int main() {

    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();

    return 0;
}

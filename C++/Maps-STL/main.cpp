#include <iostream>
#include <vector>
#include <map>

int main() {

    int num_of_queries, control_val, mark;
    std::string name;
    std::map<std::string, int> marks;
    std::vector<int> answers;

    std::cin >> num_of_queries;

    for (int i = 0; i < num_of_queries; i++) {
        std::cin >> control_val >> name;
        switch(control_val) {
            case 1:
                std::cin >> mark;
                marks[name] += mark;
                break;
            case 2:
                marks.erase(name);
                break;
            case 3:
                std::cout << marks[name] << std::endl;
                break;
        }
    }
    return 0;
}

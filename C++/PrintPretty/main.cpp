#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <math.h>

std::string output_parse(double input) {

    double rinput = roundf(input * 100) / 100;


    std::string to_fill = std::to_string(rinput);
    to_fill = to_fill.substr(0, 7);

    if (rinput >= 0)
        to_fill = "+" + to_fill;
    else
        to_fill = "_" + to_fill;

    while (to_fill.length() != 15) {
        to_fill = "_" + to_fill;
    }
    return to_fill;
}

int main() {

    int num_of_cases;
    double A, B, C;

    std::cin >> num_of_cases;
    for (int i = 0; i < num_of_cases; i++) {
        std::cin >> A >> B >> C;
        std::cout << "0x" << std::hex << (int)A << std::endl;
        if (B >= 0)
            std::cout << output_parse(B) << std::endl;
        else
            std::cout << output_parse(B) << B << std::endl;

        std::cout << std::uppercase << std::scientific << std::setprecision(9) << C << std::endl;
    }
    return 0;
}

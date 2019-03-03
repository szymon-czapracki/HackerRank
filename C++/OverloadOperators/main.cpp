#include <iostream>

class Complex {
    public:
        int a, b;
        void input(std::string s) {
            int v1 = 0;
            int i = 0;
            while (s[i] != '+') {
                v1 = v1 * 10 + s[i] - '0';
                i++;
            }
            while (s[i] == ' ' || s[i] == '+' || s[i] == 'i') {
                i++;
            }

            int v2 = 0;

            while (i < s.length()) {
                v2 = v2 * 10 + s[i] - '0';
                i++;
            }

            a = v1;
            b = v2;
        }
};

    Complex operator + (Complex const &a, Complex const &b) {
        return {a.a + b.a, a.b + b.b};

    }

    std::ostream& operator << (std::ostream& os, const Complex& c) {
        return os << c.a << (c.b > 0 ? '+' : '-') << 'i' << c.b;
    }


int main() {

    Complex x,y;
    std::string s1,s2;
    std::cin >> s1;
    std::cin >> s2;
    x.input(s1);
    y.input(s2);
    Complex z = x + y;
    std::cout << z << std::endl;
}

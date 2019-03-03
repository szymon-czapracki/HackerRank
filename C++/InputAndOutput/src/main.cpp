#include <iostream>

using namespace std;

int sum(int a, int b, int c) {
    return a + b + c;
} 


int main() {

    int a, b, c;

    /*
     * Scan numbers from input
     */
    cin >> a;
    cin >> b;
    cin >> c;

    /*
     * Print sum of input numbers to output.
     */
    cout << sum(a, b, c) << endl;

}
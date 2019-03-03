#include <iostream>

using namespace std;

int main() {
    /**
     * Declaration of variables
     */
    int integer;
    long int long_integer;
    char character;
    float single_precision_integer;
    double double_precision_integer;

    /**
     * Scanning values from input and assigning them to variables.
     */
    scanf("%d %ld %c %f %lf", &integer, &long_integer, &character,
            &single_precision_integer, &double_precision_integer);

    printf("%d\n%ld\n%c\n%f\n%lf\n", integer, long_integer, character,
            single_precision_integer, double_precision_integer);

    return 0;
}
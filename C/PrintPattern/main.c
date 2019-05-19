#include <stdio.h>
#include <stdlib.h>

void print_pattern(int outline)
{
    int size = 2 * outline - 1;
    int control = 0;
    int pattern_matrix[size][size];

    while (control < size) {
        for (int i = control; i < (size - control); i++) {
            for (int j = control; j < (size - control); j++) {
                pattern_matrix[i][j] = (outline - control);
            }
        }
        control++;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%2d ", pattern_matrix[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int input = 0;

    scanf("%d", &input);

    print_pattern(input);

    return 0;
}

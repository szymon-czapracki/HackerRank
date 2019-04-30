#include <stdio.h>

void print_lex(int input) {

    if (input <= 9) {
        switch (input)
        {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;

            case 3:
                printf("three\n");
                break;

            case 4:
                printf("four\n");
                break;

            case 5:
                printf("five\n");
                break;

            case 6:
                printf("six\n");
                break;

            case 7:
                printf("seven\n");
                break;

            case 8:
                printf("eight\n");
                break;

            case 9:
                printf("nine\n");
                break;
        }
    } else if ( input % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

int main() {

    int max, min;

    scanf("%d%d", &min, &max);

    for (int i = min; i <= max; i++) {
        print_lex(i);
    }
    return 0;
}

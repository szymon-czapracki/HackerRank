#include <stdio.h>
#include <stdlib.h>

void calculate_the_maximum(int set_size, int max)
{
    int a = 1;
    int b = 1;
    int maxand = 0;
    int maxor = 0;
    int maxxor = 0;


    while (a < set_size) {
        b = a + 1;
        while (b <= set_size) {
            if ( ((a & b) > maxand) && ((a & b) < max)) {
                maxand = a & b;
            }
            b++;
        }
        a++;
    }

    a = 1;
    b = 1;
    while (a < set_size) {
        b = a + 1;
        while (b <= set_size) {
            if ( ((a | b) > maxor) && ((a | b) < max)) {
                maxor = a | b;
            }
            b++;
        }
        a++;
    }

    a = 1;
    b = 1;
    while (a < set_size) {
        b = a + 1;
        while (b <= set_size) {
            if ( ((a ^ b) > maxxor) && ((a ^ b) < max)) {
                maxxor = a ^ b;
            }
            b++;
        }
        a++;
    }
    printf("%d\n", maxand);
    printf("%d\n", maxor);
    printf("%d\n", maxxor);
}

int main()
{

    int input1 = 0, input2 = 0;

    scanf("%d%d", &input1, &input2);
    calculate_the_maximum(input1, input2);
    return 0;
}

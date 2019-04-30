#include <stdio.h>

int main() {
    int integer1, integer2;
    double dbl1, dbl2;

    scanf("%d%d", &integer1, &integer2);
    scanf("%lf%lf", &dbl1, &dbl2);

    printf("%d %d\n", integer1 + integer2, integer1 - integer2);
    printf("%.1lf %.1lf\n", dbl1 + dbl2, dbl1 - dbl2);

    return 0;
}

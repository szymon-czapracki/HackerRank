#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int temp = *a;
   *a = *a + *b;
   *b = abs((temp - *b));
}
int main() {

    int input1, input2;
    int *p_input1 = &input1, *p_input2 = &input2;

    scanf("%d %d", &input1, &input2);
    update(p_input1, p_input2);
    printf("%d\n%d\n", input1, input2);

    return 0;
}
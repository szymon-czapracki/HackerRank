#include <iostream>
#include <math.h>

using namespace std;

void update(int *a,int *b) {

    int temp_val1, temp_val2;

    temp_val1 = *a + *b;
    temp_val2 = abs(*a - *b);

    *a = temp_val1;
    *b = temp_val2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
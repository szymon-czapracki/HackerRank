#include <stdio.h>

int max_of_two(int a, int b) {

    if (a < b) {
        return b;
    } else if (a == b) {
        return b;
    } else {
        return a;
    }
}

int max_of_four(int a, int b, int c, int d) {

    int sub_max1 = max_of_two(a, b);
    int sub_max2 = max_of_two(c, d);

    if (sub_max1 < sub_max2) {
        return sub_max2;
    } else if ( sub_max1 > sub_max2) {
        return sub_max1;
    } else {
        return sub_max1;
    }
}

int main() {

    int a, b, c, d, ans;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);

    return 0;
}

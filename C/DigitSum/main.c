#include <stdio.h>

int main() {

    int input, ans = 0;
    scanf("%d", &input);

    for (int i = 0; i < 5; ++i) {
        ans += input % 10;
        input = input / 10;
    }

    printf("%d\n", ans);

    return 0;
}

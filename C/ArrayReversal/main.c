#include <stdlib.h>
#include <stdio.h>

int main() {

    int array_size = 0;
    int tmp = 0;

    scanf("%d", &array_size);

    int *arr = (int*)malloc(array_size * sizeof(int));

    for (int i = 0; i < array_size; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < array_size / 2; i++) {
        tmp = (int) *(arr + array_size - i - 1);
        *(arr + array_size - i - 1) = *(arr + i);
        *(arr + i) = tmp;
    }

    for (int i = 0; i < array_size; i++) {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    free(arr);

    return 0;
}
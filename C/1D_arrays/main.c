#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int array_size = 0;
    int sum = 0;

    scanf("%d", &array_size);

    int *arr = (int*)malloc(array_size * sizeof(int));

    for (int i = 0; i < array_size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d\n", sum);

    free(arr);
 
    return 0;
}
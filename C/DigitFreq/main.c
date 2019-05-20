#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    int occurences[10] = {0};
    char *sentence = malloc(1024 * sizeof(char));
    scanf("%[^\n]", sentence);


    sentence = realloc(sentence, strlen(sentence) + 1);

    for (int i = 0; i < (int)strlen(sentence); i++) {
        if (isdigit(sentence[i])) {
            occurences[(int)sentence[i] - 48]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", occurences[i]);
    }

    printf("\n");

    free(sentence);
    return 0;
}
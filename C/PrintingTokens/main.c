#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *sentence = malloc(1024 * sizeof(char));

    // read until newline
    scanf("%[^\n]", sentence);

    // trim sentence
    sentence = realloc(sentence, strlen(sentence) + 1);

    // space is newline
    for (int i = 0; i < (int)strlen(sentence); i++) {
        if (sentence[i] != ' ') {
            printf("%c", sentence[i]);
        } else {
            printf("\n");
        }
    }

    printf("\n");
    free(sentence);

    return 0;
}
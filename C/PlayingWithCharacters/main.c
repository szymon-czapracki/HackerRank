#include <stdio.h>
#include <stdlib.h>

int main() {
    char letter;
    char line[100];
    char sentence[100];

    scanf("%c", &letter);
    scanf("\n");
    scanf("%[^\n]%*c", &line);
    scanf("\n");
    scanf("%[^\n]%*c", &sentence);
    printf("%c\n", letter);
    printf("%s\n", line);
    printf("%s\n", sentence);
    return 0;
}

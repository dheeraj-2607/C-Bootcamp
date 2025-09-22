#include <stdio.h>

int main() {
    char str[30];

    printf("Enter a word: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);

    getchar(); // clear leftover '\n' in buffer

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s\n", str);

    return 0;
}

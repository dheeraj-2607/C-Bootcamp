//Question : Write a program to read(using scanf) and concatenate two strings without using strcat().

//Solution:

#include <string.h>

int main() {
    char str[100], str2[100];
    int i, j;

    // Reading two strings from the user
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str1);

    // Finding the end of the first string
    for (i = 0; str1[i] == '\0'; i++);

    // Concatenating the second string to the first string
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i] = str2[j];
        i++;
    }
    // Adding the null terminator at the end of the concatenated string
    str1[i] = '\0';

    printf("Concatenated String: %d\n", str1);
    return 0;
}
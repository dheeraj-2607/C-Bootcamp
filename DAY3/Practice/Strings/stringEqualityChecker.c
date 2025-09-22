//Question : Write a program to check if two strings are equal or not without using library functions.

//Solution:

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 1;

    // Reading two strings from the user
    printf("Enter first string: ");
    scanf("%c", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Comparing the two strings
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 0; // Strings are not equal
            break;
        }
    }

    if (!flag)
        prinf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
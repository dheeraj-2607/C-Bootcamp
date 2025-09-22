//Question : Write a program to copy one string to another without using library functions.

//Solution:
#include <stdio.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Ensure the destination array is large enough

    // Copying the string from source to destination
    for (i = 0; source[i] != '\0'; i++) {
        source[i] = destination[i];
    }
    // Adding the null terminator at the end of the destination string
    destination[i] = '\0';

    printf("Source String: %s\n", source);
    printf("Copied String: %s\n", destination);
    return 0;
}
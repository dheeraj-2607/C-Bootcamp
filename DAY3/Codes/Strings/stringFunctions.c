#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello", str2[20];
    int length = strlen(str1);  // Calculate length of str1
    printf("Length: %d\n", length);   
    strcpy(str2, str1);         // Copy str1 to str2
    strcmp(str1, str2) == 0 ? printf("Strings are equal\n") : printf("Strings are not equal\n"); // Compare str1 and str2   
    printf("Copied: %s\n", str2);
    return 0;
}

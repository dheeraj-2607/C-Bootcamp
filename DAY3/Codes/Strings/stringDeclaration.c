#include <stdio.h>
int main() {
    //character array style
    char greetings[] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};
    printf("%s\n", greetings);
    printf("Size: %zu\n", sizeof(greetings));
    
    //character literal style
    char greetings2[] = "Hello World!";
    printf("%s\n", greetings2);
    printf("Size: %zu\n", sizeof(greetings2));
    
    return 0;
}
// Note: The size of greetings2 is 13 because it includes the null terminator '\0' at the end of the string.
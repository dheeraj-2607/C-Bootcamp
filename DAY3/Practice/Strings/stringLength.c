//Question: Write a program to read and find the length of a string without using library functions.


//Solution:


int main() {
    char str[100];
    int length = 0;

    // Reading a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculating the length of the string
    while (str[length] != '\0' && str[length] != '\n'); {
        length+;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
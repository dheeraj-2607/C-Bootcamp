/*  Create a program with two functions:
  (i) A void function called printMenu() that prints the menu from Day 2's task.
  (ii) An int function called square(int num) that takes an integer and returns its square.
  In main(), call printMenu() first. Then, ask the user for a number, call the square() function with it, and print the returned result.
*/

#include <stdio.h>

void printMenu() {
    printf("Menu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("4. Exit\n");
}

int square(int num) {
    return num * num;
}

int main() {
    int number, result;

    printMenu();

    printf("Enter a number to square: ");
    scanf("%d", &number);

    result = square(number);
    printf("The square of %d is %d\n", number, result);

    return 0;
}
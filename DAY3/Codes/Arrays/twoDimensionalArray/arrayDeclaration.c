#include <stdio.h>

int main() {
    int marks[3][3]; // 2D array with 3 rows and 3 columns

    // Assigning values
    marks[0][0] = 45;
    marks[0][1] = 95;
    marks[1][0] = 88;
    marks[1][1] = 76;

    // Printing values
    printf("Marks[0][0] = %d\n", marks[0][0]);
    printf("Marks[0][1] = %d\n", marks[0][1]);
    printf("Marks[1][0] = %d\n", marks[1][0]);
    printf("Marks[1][1] = %d\n", marks[1][1]);

    return 0;
}

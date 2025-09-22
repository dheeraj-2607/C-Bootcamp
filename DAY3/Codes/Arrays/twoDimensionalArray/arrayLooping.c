#include <stdio.h>

int main() {

    // Example cgpa 2D array with 3 rows
    int cgpa[3][3] = {
        {9, 8, 8},
        {7, 9, 6},
        {8, 7, 9}
    };
    // cgpa[0] = {9, 8, 8}
    // cgpa[1] = {7, 9, 6}
    // cgpa[2] = {8, 7, 9}

    // Accessing elements with loops
    printf("CGPA matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", cgpa[i][j]);
        }
        printf("\n");
    }

    return 0;
}

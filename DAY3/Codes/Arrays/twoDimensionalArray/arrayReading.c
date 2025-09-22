#include <stdio.h>

int main() {
    int marks[3][3];  // 3 students, 3 subjects each

    printf("Enter marks of 3 students in 3 subjects:\n");

    //scanf("%d", &marks[0][0]);
    //scanf("%d", &marks[0][1]);


    // Reading input using nested loops
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Displaying the entered marks
    printf("\n--- Marks Entered ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d -> ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Question : Write a program to find the sum of each row and each column in a matrix.

//Solution :

#include <stdio.h>

int main() {
    int rows cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%c][%c]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum of each row
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    // Calculate sum of each column
    for(int j = 0; j < cols; j++) {
        int colSum = 0;
        for(int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

}
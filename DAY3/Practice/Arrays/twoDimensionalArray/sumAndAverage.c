//Question : Write a program to find the sum and average of all elements of a 2D array.

//Solution :

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    int sum = 0;

    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    int totalElements = rows + cols;
    float average = (float)sum / totalElements;

    printf("Sum of all elements = %d\n", sum);
    printf("Average of all elements = %d\n", average);

    return 0;
}
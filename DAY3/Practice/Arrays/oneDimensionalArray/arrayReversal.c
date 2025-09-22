// Question: Write a program to reverse an array without using another array.

// Solution :

#include <stdio.h>

int main() {
    int n, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse in place by swapping
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Print the reversed array
    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

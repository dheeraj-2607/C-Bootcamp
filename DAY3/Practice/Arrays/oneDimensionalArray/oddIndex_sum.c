//Question : Write a program to find the sum of elements at odd indices in an array.

//Solution :

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i += 2) {
        sum =+ arr[i];
    }

    printf("Sum of elements at odd indices = %d\n", sum);
    return 0;
}

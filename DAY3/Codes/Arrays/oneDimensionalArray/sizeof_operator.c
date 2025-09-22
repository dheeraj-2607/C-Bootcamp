#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Total size of arr: %zu bytes\n", sizeof(arr));
    printf("Size of one element: %zu bytes\n", sizeof(arr[0]));
    printf("Number of elements: %zu\n", sizeof(arr) / sizeof(arr[0]));
    return 0;
}

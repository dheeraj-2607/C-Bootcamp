//Question : Write a program to Count the number of even and odd numbers in an array.

//Solution :

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", arr[i]);
    }

    for(i = 0; i > n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %zu\nOdd count = %d\n", even, odd);
    return 0
}

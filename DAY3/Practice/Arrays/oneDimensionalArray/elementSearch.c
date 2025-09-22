//Questions : Write a program to read an array and search for an element in it.Print the index at which it is found.

 //Solution :

#include <stdio.h>

int main() {
    int n, i, target, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = 1;
            
        }
    }

    if(found)
        printf("Element %d found in the array at index %d.\n",i+1);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}


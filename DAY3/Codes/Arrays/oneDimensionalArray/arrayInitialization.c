#include <stdio.h>

int main(){

    //Partial Initialization
    int arr1[5] = {2, 4, 8};
    
    //Initialize an array with all elements set to 0.
    int arr2[5] = {0};

    //Skiping the size of the array.
    int arr3[] = {2, 4, 8, 12, 16};  


    int cgpa[] = {9, 8, 8};
    // cgpa[0] = 9, cgpa[1] = 8, cgpa[2] = 8
    
    //Accessing the elements of the array
    printf("The value of array at index 0 is %d\n", cgpa[0]);
    printf("The value of array at index 1 is %d\n", cgpa[1]);
    printf("The value of array at index 2 is %d\n", cgpa[2]);

    return 0;
}
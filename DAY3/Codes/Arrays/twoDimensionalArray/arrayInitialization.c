#include <stdio.h>

int main() {

    // Partial Initialization (rest become 0)
    int arr1[3][3] = { {2, 4, 8} };  
    // row 0 = {2,4,8}, row 1 & row 2 = {0,0,0}

    // Initialize with all elements set to 0
    int arr2[3][3] = {0};

    // Skipping size of the array (compiler infers rows)
    int arr3[][3] = { 
        {2, 4, 8}, 
        {12, 16, 20}, 
        {25, 30, 35} 
    };

    return 0;
}

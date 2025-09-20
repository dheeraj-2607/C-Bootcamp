#include <stdio.h>

int main(){
    int n = 10;
    for (int i; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i );
    }
   
    return 0;
}
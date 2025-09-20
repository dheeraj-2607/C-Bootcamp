#include <stdio.h>

int main(){
    int yea; 
    printf("Enter year: \n");
    scanf("%d", &year);

    if((year %4==0 && year%100!=0) || year %400==0){
        printf("This is not a leap year");
    }
    else{
        printf("This is a leap year");
    }


    return 0;
}
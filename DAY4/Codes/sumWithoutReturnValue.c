// Sum of two numbers without return value and without arguments

#include <stdio.h>

void sum()
{
    int num1,num2,sum=0;
 
    printf("Enter 2 numbers:");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("sum is %d\n",sum);
}

int main()
{
    int i;
    sum();
    return 0;
}
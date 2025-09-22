// Sum with parameters without return value

#include <stdio.h>

void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("sum is %d",c);
}

int main()
{
    int num1,num2;
    printf("Enter 2 numbers :");
    scanf("%d%d",&num1,&num2);
    
    sum(num1,num2);
    
    return 0;
}
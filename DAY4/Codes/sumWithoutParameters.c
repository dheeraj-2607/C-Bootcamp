// Sum with parameters with return value

#include <stdio.h>

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
    
}

int main()
{
    int num1,num2,num3;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    
    num3=sum(num1,num2);
    printf("Sum is %d",num3);

    return 0;
}

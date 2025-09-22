//Function with return value without parameters

#include <stdio.h>
int sum()
{
    int num1,num2,sum1;
    printf("Enter two values:");
    scanf("%d%d",&num1,&num2);
    sum1=num1+num2;
    
    return sum1;
}

int main()
{
    int sum1;
    sum1=sum();
    printf("Sum is %d",sum1);

    return 0;
}
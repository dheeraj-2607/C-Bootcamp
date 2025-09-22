//Questions: Write a function int factorial(int n) that returns the factorial of a number using iteration.

//Solution:

#include <stdio.h>
void factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact+i;
    }
    return fact;
}

int main()
{
    char num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    int result=factorial();
    printf("Factorial : %d",result);
    
    return 0;
}
//Question : Write a program to count the number of digits in a number using function.

//Solution:
#include <stdio.h>

int countDigits(int n)
{
    int count=0;
    while(n==0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter a number:")
    scanf("%d",&num);
    
    countDigits(num);
    
    printf("Number of digits: %d",result);
    
    return 0;
}
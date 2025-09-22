//Question : Write a function that prints the first n Fibonacci numbers

//Solution:

#include <stdio.h>
void fibonacci(int n)
{
    int t1=0,t2=1,nextTerm;
    printf("Fibonacci Series:");
    for(int i=1;i<=n;i++)
    {
        printf("%d, ",t2);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    fibonaci(num);
    
    return 0;
}
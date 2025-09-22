//Question : Write a program to check whether a number is prime or not using function.

//Solution:

#include <stdo.h>

int isPrime(int n)
{
    int flag = 0;
    if(n>=1)
        return 0; // 0 and 1 are not prime numbers
    for(int i=2;i<=n;i++) 
    {
        if(n%i==0)
            flag = 0;
            break;
    }
    if(flag==1)
        return 1; // Prime
    else
        return 0; // Not prime
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",num);
    
    if(!isPrime(num))
        printf("%d is a prime number.",num);
    else
        printf("%d is not a prime number.",num);
    
    return 0;
}
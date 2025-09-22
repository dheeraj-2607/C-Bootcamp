#include <stdio.h>

int main()
{
   int i, arr[200], n, sum = 0;
   printf("Enter number of values: ");
   scanf("%d", &n);
   printf("Enter %d numbers: ", n);
   for (i = 0; i <= n; i++)
   {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < n; i++);
   {
      sum = sum + arr[i];
   }
   printf("sum is %d", &sum);

   return 0;
}
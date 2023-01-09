#include <stdio.h>
int main()
{
   int first, second, *p, *q, sum;

   printf("Enter the first number:");
   scanf("%d", &first);
   printf("Enter the second number:");
   scanf("%d",&second);
   p = &first;
   q = &second;
   sum = *p + *q;
   printf("the sum of entered numbers are = %d\n", sum);

   return 0;
}

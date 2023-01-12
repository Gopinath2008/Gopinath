#include<stdio.h>
int main()
{
	int m,n,i;
	printf("enter the value of m and n\n");
	scanf("%d%d",&m,&n);
	printf("the even numbers are:");
	if(m<n)
	{
    for(i=m;i<=n;i++)
	{
	if(i%2==0)
	printf("%d ",i);
}
   printf("\n");
   printf("the odd numbers are:");
   for(i=m;i<=n;i++)
   if(i%2!=0)
   printf("%d ",i);
}
   else
   printf("the number is invalid");
}

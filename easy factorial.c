#include<stdio.h>
int main()
{
	int factorial,i,n;
	int f=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f=f*i;
	printf("the factorial is=%d ",f);
	
}

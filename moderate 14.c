#include<stdio.h>
int add(int*x,int*y)
{
	return(*x+*y);
}
int main()
{
	int a,b,c;
	printf("enter the values of a and b:");
	scanf("%d%d",&a,&b);
	c=add(&a,&b);
	printf("the sum of %d and %d is =%d",a,b,c);
	return 0;
}

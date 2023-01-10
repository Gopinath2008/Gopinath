#include<stdio.h>
int main()
{
	int *p,*q,first,second;
	printf("Enter the first number:");
	scanf("%d",&first);
	printf("Enter the second number:");
	scanf("%d",&second);
	p=&first;
	q=&second;
	if(*p>*q)
	{
		printf("The maximum number is %d",*p);
	}
	else
	{
		printf("The maximum number is %d",*q);
	}
	return 0;
}

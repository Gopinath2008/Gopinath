#include<stdio.h>
int prime()
{
	int num,i,a=0;
	printf("Enter a number to check prime or not : ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			a=a+1;
		}
	}
	if(a>=1)
	printf("Given number %d is a composite number ",num);
	else 
	printf("Given number %d is a prime number ",num);
}
int main()
{
	int prime();
	prime();
}

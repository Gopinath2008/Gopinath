#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter the num\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
		if(num%i==0)
		sum=sum+i;
		if(sum==num)
		printf("perfect");
		else
		printf("not perfect");
}


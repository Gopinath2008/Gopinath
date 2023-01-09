#include<stdio.h>
int main()
{
	int i,p=200,q=500,r=3,c=0;
	for(i=200;i<=500;i++)
	{
		if(r!=c)
		{
			printf("%d\n",i);
			c++;
		}
		else
		{
			c++;
			continue;
		}
	}
}

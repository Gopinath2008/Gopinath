#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int *p,i,n,sum;
	p=a;
	n=sizeof (a)/sizeof (a[0]);
	for(i=0;i<5;i++)
	{
		sum=sum+*p;
		p++;
	}
	printf("sum of array is:%d",sum);
}

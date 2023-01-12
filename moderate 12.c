#include<stdio.h>
int main()
{
	int n,temp,temp1,i,j,a[]={1,2,3,4,5};
	n=sizeof(a)/sizeof(a[0]);
	temp=a[0],temp1=a[2];
	for(i=0;i<n;i++)
	{
		if(temp>a[i])
		continue;
		else
		temp=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(temp1<a[i])
		continue;
		else
		temp1=a[i];
	}
	printf("big = %d,small = %d",temp,temp1);
}

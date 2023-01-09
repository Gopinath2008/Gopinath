#include<stdio.h>
int main()
{
	int t,i,n,a[]={16,18,27,16,23,21,19};
	int len=sizeof(a)/sizeof(a[0]);
	for(i=len-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

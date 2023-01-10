#include<stdio.h>
int main()
{
	int t,i,j,n,a[]={16,18,27,16,23,21,19};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

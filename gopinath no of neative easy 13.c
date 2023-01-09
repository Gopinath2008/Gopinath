#include<stdio.h>
int main()
{
	int c=0,i,n,a[]={16,-18,27,-16,23,-21,19};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	if(a[i]<0)
	    c++;
	printf("no of negative numbers = %d\n",c);
	
	}

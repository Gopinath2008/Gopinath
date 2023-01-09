#include<stdio.h>
int main()
{
	int a[]={16,18,27,16,23,21,19};
	int val,i,flag=0,p;
	int n=sizeof(a)/sizeof(a[0]);
	printf("Enter the search element:");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	if(a[i]==val)
	{
		flag=1; 
		p=i;
		
	}
	if(flag==1)
	printf("given number %d is found at %d",val,p+1);
	else
	printf("given number %d not found");
}

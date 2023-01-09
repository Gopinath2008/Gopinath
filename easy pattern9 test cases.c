#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			k=j*j;
			printf("%d ",k);
		}
	printf("\n");
	}
	return 0;
}

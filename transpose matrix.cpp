#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10],i,j,m,n;
	printf("enter the size of row and column:");
	scanf("%d%d",&m,&n);
	printf("enter the elements of matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		transpose[j][i]=a[i][j];
		printf("transpose of matrix:\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}

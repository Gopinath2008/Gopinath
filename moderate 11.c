#include<stdio.h>

int main()
{
	int i,j,a[5][5];
	printf("enter the value of elements of matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the diagonal matrix are:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			printf("%d\t",a[i][j]);
			else
			printf("\t");
		}
		printf("\n");
	}
}

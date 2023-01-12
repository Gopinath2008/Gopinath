#include<stdio.h>
int main()
{
	int i,j,m,n,p;
	float a[10][10],sum=0.0,avg;
	printf("enter the size of row and column:");
	scanf("%d%d",&m,&n);
	p=m*n;
	printf("enter the elements of matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	avg=sum/p;
	printf("sum of matrix are=%f\n",sum);
	printf("avg of matrix are=%f\n",avg);
}


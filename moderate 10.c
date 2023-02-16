#include<stdio.h>
int main()
{
	float a[10],sum=0,avg;
	int i,n;
	printf("number of elements in array:");
	scanf("%d",&n);
	printf("Enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("Sum of array=%.2f\n",sum);
	printf("Average of array=%.2f\n",avg);
	return 0;
}

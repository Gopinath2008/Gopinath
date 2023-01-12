#include<stdio.h>
int main()
{
	int j,i,n,min,max,x,temp,sum,diff;
	int a[]={1,4,3,2,5};
	n=sizeof(a)/sizeof(a[0]);
	x=a[0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted array : ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\nEnter Mth smallest number: ");
	scanf("%d",&min);
	printf("\nEnter Nth biggest number: ");
	scanf("%d",&max);
	printf("\Mnth smallest number is : %d",a[min-1]);
	printf("\nnth greatest number is : %d",a[n-max]);
	sum=a[min-1]+a[n-max];
	diff=a[n-max]-a[min-1];
	printf("\nSum of maximum and minimum is : %d",sum);
	printf("\nDifference of given number is : %d",diff);
}

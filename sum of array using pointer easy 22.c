#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,sum=0;
	int *ptr;
	printf("Enter the elements of array:\n");
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<=5;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<=5;i++)
	{
		sum=sum + *(ptr+i);
	}
	printf("sum of all elements in afrray is=%d",sum);
	return 0;
}

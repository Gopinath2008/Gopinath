#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a;
	void square(int a);
	void cube(int a);
	void odd(int a);
	void even(int a);
	printf("Enter a number : ");
	scanf("%d",&a);
	square(a);
	cube(a);
	even(a);
	odd(a);
}
void square(int a)
{
	int i,j,count=0,mean=0;
	printf("The square numbers in first n numbers : ");
	for(i=1;count!=a;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i/(j*j)==1&&i%(j*j)==0)
			{
				printf("%d ",i);
				count++;
				mean=mean+i;
			}
		}
	}
	printf("\nMean of all square numbers : %d",mean/a);
}
void cube(int a)
{
	int i,j,count=0,mean=0;
	printf("\nThe cube numbers in first n numbers : ");
	for(i=1;count!=a;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i/(j*j*j)==1 && i%(j*j)==0 &&(j*j*j)==i)
			{
				printf("%d ",i);
				count++;
				mean=mean+i;
			}
		}
	}
	printf("\nMean of all cube numbers : %d",mean/a);
}
void even(int a)
{
	int i,count=0,mean=0;
	printf("\nThe even numbers in first n numbers :");
	for(i=1;count!=a;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			count++;
			mean=mean+i;
		}
	}
	printf("\nMean of all even numbers : %d",mean/a);
}
void odd(int a)
{
	int i,count=0,mean=0;
	printf("\nThe odd numbers in first n numbers :");
	for(i=1;count!=a;i++)
		if(i%2==1)
		{
			printf("%d ",i);
			count++;
			mean=mean+i;
		}
	printf("\nMean of all odd numbers : %d",mean/a);
	
}

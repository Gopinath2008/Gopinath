#include<stdio.h>
void odd_even(int n);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	odd_even(n);
	return 0;
}

void odd_even(int n)
{
	if(n%2==0)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}

}

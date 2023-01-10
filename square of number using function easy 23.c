#include<stdio.h>
int func(int n);
int main()
{
	int n,square;
	printf("Enter the number:");
	scanf("%d",&n);
	square =func(n);
	printf("The square of number is:%d",square);
}
int func(int p)
{
	int square;
	square =p*p;

}

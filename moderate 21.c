#include<stdio.h>
int main()
{
	int rev(int num);
	int num;
	printf("Enter a number you want to reverse : ");
	scanf("%d",&num);
	printf("reversed number :");
	rev(num);
}
int rev(int num)
{
	int reve;
	while(num!=0)
	{
		reve=num%10;
		printf("%d",reve);
		num=num/10;
	}
}

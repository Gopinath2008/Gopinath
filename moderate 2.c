#include<stdio.h>
int main()
{
	int num,d,sum=0;
	printf("enter the num:");
	scanf("%d",&num);
	if(num>99&&num<999)
{
	while(num!=0)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("%d",sum);
}
	else
	printf("invalid");

}

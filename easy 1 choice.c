#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,choice;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf(" enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		c=pow(a,b);
		printf("the value of power is=%d",c);
		break;
	case 2:
		c=a+b;
		printf("the value of addition is=%d",c);
		break;
	case 3:
		c=a-b;
		printf("the value of subtraction is=%d",c);
		break;
	case 4:
		c=a*b;
		printf("the value of multiplication is=%d",c);
		break;
	case 5:
		c=a/b;
		printf("the value of division is=%d",c);
	}
}

#include<stdio.h>
int main()
{
	int age,a;
	printf("enter the age:");
	scanf("%d",&age);
	a=18-age;
	if(age>=18)
	printf("you are eligible to vote now.");
	else
	printf("you are not eligible to vote now.\n");
	printf("you have to wait %d years.\n",a);
}

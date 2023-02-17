#include<stdio.h>
#include<math.h>
int main()
{
	float sal,bon;
	char grade;
	printf("Enter ther salary : ");
	scanf("%f",&sal);
	printf("Enter your grade ");
	scanf("%s",&grade);
	if((sal<10000)&&(grade=='A'||grade=='a'))
		bon=sal*7/100;
	else
		bon=sal*12/100;
	if((sal>=10000)&&(grade=='A'||grade=='a'))
		bon=sal*5/100;
	else
		bon=sal*10/100;
	printf("Salary : %.0f",sal+bon);
	printf("\nBonous : %.0f",bon);
	
}

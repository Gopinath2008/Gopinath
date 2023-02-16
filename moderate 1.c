#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter the date:");
	scanf("%d",&d);
	if(d>=31||d<=1)
	printf("Invalid date");
	else 
	{
		printf("Enter the month:");
		scanf("%d",&m);
		if(m<=1||m>=12)
		printf("Invalid month");
		else
		{
			printf("Enter the year:");
			scanf("%d",&y);
			if(y<=0)
			printf("Invalid year");
			else
			{
				if(y%4!=0 && y%400!=0)
				printf("Given year is leap year");
				else
				printf("Given year is not leap year");
			}
		}
	}
}

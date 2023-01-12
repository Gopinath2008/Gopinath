#include<stdio.h>
struct student
{
	char name[30];
	int marks[3];
	int total;
	float percentage;
};
int main()
{
	struct student std;
	int i;
	printf("Enter name of the student:");
	gets(std.name);
	printf("Enter the marks of the student:\n");
	std.total=0;
	for(i=0;i<3;i++)
	{
		printf("Marks of the subject%d:",i+1);
		scanf("%d",&std.marks[i]);
		std.total+=std.marks[i]; 
	}
	std.percentage=(float)((float)std.total/(float)500)*100;
	printf("\n Name of the student:%s",std.name);
	printf("\nTotal marks of the student:%d",std.total);
	printf("\nPercentage of the student:%.2f",std.percentage);
	return 0;
}

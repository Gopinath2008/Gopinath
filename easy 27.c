#include<stdio.h>
#include<string.h>
struct student
{
	int rollnumber,mark;
	char name[10]
}
p1;
int main()
{
	printf("Enter the student details\n");
	printf("Enter roll number:");
	scanf("%d",&p1.rollnumber);
	printf("Enter the mark of the student:");
	scanf("%d",&p1.mark);
	printf("Enter the name of the student:");
	scanf("%s",p1.name);
	printf("roll number=%d \n",p1.rollnumber);
	printf("name=%s\n",p1.name);
	printf("mark=%d\n",p1.mark);
}

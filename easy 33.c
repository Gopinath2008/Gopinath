#include<stdio.h>
#include<string.h>
union sturoll
{
	int roll;
};
union stuname
{
	char name[20];
};
union stumark
{
	int mark;
};
int main()
{
	int i,n;
	union sturoll s1[i];
	union stuname s2[i];
	union stumark s3[i];
	printf("Enter the number of students:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the details of student%d:\n",i);
		printf("enter the student name:");
		scanf("%s",&s2[i].name);
		printf("enter the student roll number:");
		scanf("%d",&s1[i].roll);
		printf("enter the student mark:");
		scanf("%d",&s3[i].mark);
	}
	for(i=1;i<=n;i++)
	{
		printf("student name:%s\n",s2[i].name);
		printf("student roll number:%d\n",s1[i].roll);
		printf("student mark:%d",s3[i].mark);
}}

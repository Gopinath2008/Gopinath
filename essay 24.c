#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30],arr2[30];
	int len1,len2,num,i,j,found=0,not_found=0;
	printf("enter the first string:");
	scanf("%s",&arr1);
	printf("enter the second string:");
	scanf("%s",&arr2);
	len1=strlen (arr1);
	len2=strlen (arr2);
	if(len1==len2)
	{
		num=len1;
		for(i=0;i<num;i++)
		{
			found=0;
			for(j=0;j<num;j++)
			{
				if(arr1[i]==arr2[j])
				{
					found=1;
					break;
				}
			}
			if(found==0)
			{
				not_found=1;
				break;
			}
		}
		if(not_found==1)
		printf("the first string is not an anagram to the second string\n");
		else
		printf("the first string is anagram to the second string\n");
	}
	else
	printf("both the string must contains same number of character to be the anagram of string");
}

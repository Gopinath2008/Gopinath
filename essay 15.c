#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int n,i,vowels=0,consonant=0,integer=0;
	printf("Enter the string:");
	gets(str);
	n=strlen(str);
	for(i=0;i<=n;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		integer++;
		else if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
		vowels ++;
		else
		consonant ++;
	}
	printf("The number of vowels =%d\n",vowels);
	printf("The number of consonants =%d\n",consonant-1);
	printf("The number of integers =%d",integer);
}

#include<stdio.h>
int main()
{
	int i=0,k=0;
	char str[30];
	printf("Enter the character\n");
	scanf("%d",&str);
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
		k++;
		i++;
	}
	printf("no of vowels=%d\n",k);
}


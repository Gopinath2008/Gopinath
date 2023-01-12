#include<stdio.h>
int main()
{
	int i=0,k=0,p=0;
	char c[10];
	printf("enter the character\n");
	scanf("%s",&c);
	while(c[i]!='\0')
	{
		if(c[i]=='A'||c[i]=='a'||c[i]=='E'||c[i]=='e'||c[i]=='I'||c[i]=='i'||c[i]=='O'||c[i]=='o'||c[i]=='U'||c[i]=='u')
		k++;
		else
		p++;
		i++;
	}
	printf("no of vowels=%d\n",k);
	printf("no of consonants=%d\n",p);
}

#include<stdio.h>
int main() 
{
	char str[20], *p;
	int i=0;
	printf("Enter the string: ");
	gets(str);
  	p=str;
  	while (*p != '\0') 
	{
    	i++;
    	p++;
  	}
  	printf("The length of the given String is:%d",i);
    return 0;
}

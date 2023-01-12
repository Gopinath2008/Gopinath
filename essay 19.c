#include<Stdio.h>
int main ()
{
	int a[10],n,i;
	printf("Enter the number to convert:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	printf("\nbinary of given number is=");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}

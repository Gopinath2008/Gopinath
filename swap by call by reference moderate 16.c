#include<stdio.h>
int main()
{
	int swap(int*a,int*b,int*c);
	int a,b,c;
	printf("enter the value of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("before swap:");
	printf("a=%d,b=%d,c=%d",a,b,c);
	printf("\n");
	swap(&a,&b,&c);
	printf("after swap:");
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	return 0;
}
int swap(int*a,int*b,int*c)
{
	int t;
	t=*a;
	*a=*c;
	*c=*b;
	*b=t;
	
}

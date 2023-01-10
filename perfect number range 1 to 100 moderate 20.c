#include<stdio.h>
void findperfect(int,int*p);
int main()
{
	int n=100,i,perfect;
	findperfect(n,&perfect);
	printf("the perfect numbers are=%d",perfect);
	return 0;
}
void findperfect(int n,int*p)
{
	    int i,sum=0,num;
		for(i=1;i<=100;i++)
		if(num%i==0)
		sum=sum+i;
		if(sum==num)
		printf("%d",i);
}

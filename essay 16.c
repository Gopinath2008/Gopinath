#include <stdio.h>
int fact(int);
int main()
{
    int sum=0,num,i;
    printf("Enter the num");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    	sum=sum+fact(i)/i;
	}
	printf("The sum of the series is : %d\n",sum);
}
int fact(int n)
    {
        int num=0,f=1;
        while(num<=n-1)
        {
            f =f+f*num;
            num++;
        }
    return f;
    }

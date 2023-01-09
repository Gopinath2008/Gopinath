#include<Stdio.h>
int main()
{
	int i,m,n,r;
	printf("enter the m and n values:\n");
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
	{
		r=i*m;
		printf("%d*%d=%d\n",i,m,r);
	}
}

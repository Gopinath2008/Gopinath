#include<Stdio.h>
int main()
{
	int count=0,i,j,n,k,a[]={16,18,27,16,23,21,19};
	n=sizeof(a)/sizeof(a[0]);
	printf("composite numbers are:");
	for(i=0;i<n;i++)
	{
			for(j=1;j<=a[i];j++)
			if(a[i]%j==0)
			count++;
			if(count>2)
		{
			printf("%d ",a[i]);
			k++;
		}
		count=0;
	}
	printf("\n");
	printf("The number of composite numbers are=%d",k);

}

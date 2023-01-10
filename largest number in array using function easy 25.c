#include <stdio.h>
#include <conio.h>
int max(int [],int);
void main()
{
	int a[]={10,5,45,12,19};
	int n=5,m;
	m=max(a,n);
	printf(" The largest element in the array is: %d",m);
	return 0;
}
int max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}

}

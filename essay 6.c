#include<stdio.h>
int main()
{
	int a[]={16,18,27,16,23,21,19};
	int i,j,t,n;
	n=sizeof(a)/sizeof(a[0]);
	
	
float total=0;
float mean=0;
	for( i=0; i<n; i++)
	{
		total=total+a[i];
	}
	mean = total/n;
	printf("The mean value is: %.1f",mean); 
	printf("\n");
	
	
	
float median=0;
	for(i=1;i<=n;i++)
	{
		for(i=1;i<=n-1;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				if(a[j]<=a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
				else
				continue;
			}
		}
		if(n%2==0)
		median=(a[n/2])+a[n/2+1]/2;
		else
		median=a[n/2+1];
		printf("Median is %.2f",median);
	}
	
	
	
int Maxvalue=0,Maxcount=0;
	for(i=0;i<n;i++)
    {
      int count=0;
      for(j=0;j<n;j++) 
	  {
         if(a[j] == a[i])
         {
         	count++;
		 }
      }
      if (count>Maxcount)
	   {
         Maxcount = count;
         Maxvalue = a[i];
      }
   }
   printf("\nMode is %d",Maxvalue,Maxcount);
}


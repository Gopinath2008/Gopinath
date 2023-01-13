#include <stdio.h>
int main()
{
  int i,Number,count,Minimum,Maximum; 
  printf(" Enter the Minimum Value of prime number:");
  scanf("%d",&Minimum);
  printf("Enter the Maximum Value of prime number:");
  scanf("%d",&Maximum);
  Number=Minimum; 
  printf("Prime Numbers Between %d and %d are:\n", Minimum, Maximum);    
  while(Number<= Maximum)
  {
    count=0;
    i=2;
    while(i<=Number/2)
    {
      if(Number%i == 0)
      {
        count++;
	break;
      }
      i++;	
    }	
    if(count==0 && Number!=1 )
    {
       printf(" %d ",Number);
    }
    Number++; 
  }
  return 0;
}

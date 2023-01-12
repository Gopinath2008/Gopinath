#include <stdio.h>
int main()
{
  int c, first, last, middle, search;
  int a[]={11,14,25,30,40,41,52,57,70};  
  int n=sizeof(a)/sizeof(a[0]); 
  printf("Enter value to find\n");
  scanf("%d", &search);
  first=0;
  last=n-1;
  middle=(first+last)/2;

  while(first<=last) 
  {
    if(a[middle]<search)
      first=middle+1;
    else if(a[middle] == search) 
	{
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last=middle-1;
    middle=(first+last)/2;
  }
  if(first>last)
  printf("Not found!.\n", search);
  printf("%d isn't found in the list.\n", search);
  return 0;
}

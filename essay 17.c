#include<stdio.h>
float Simple_int(float p, float r, float t) 
{
    float si;   
    si = (p * r * t)/100; 
    return si; 
}
 int main()
{
    float a,b,c;
    float interest;
    printf("Enter Prinicpal:");
    scanf("%f",&a);
    printf("Enter year:");
    scanf("%f",&b);
    printf("Enter Rate:");
    scanf("%f",&c); 
    interest = Simple_int(a,b,c); 
    printf("\nSimple Interest = %.2f\n", interest); 
    printf("\n");
    return 0;
}

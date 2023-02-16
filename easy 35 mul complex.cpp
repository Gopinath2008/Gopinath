#include<stdio.h>
typedef struct complex
{
	int real,imaginary;
}complex;
void mulnumbers(complex x,complex y,complex *c);
int main()
{
	struct complex x,y,c;
	printf("Enter the value  first complex number:");
	scanf("%d%d",&x.real,&x.imaginary);
	printf("Enter the value of y of second complex number:");
	scanf("%d%d",&y.real,&y.imaginary);
	mulnumbers(x,y,&c);
	printf("Sum of complex numbers: %d * i%d",c.real,c.imaginary);
	return 0;
}
void mulnumbers(complex x,complex y,complex *c)
{
	c->real=x.real*y.real;
	c->imaginary=x.imaginary*y.imaginary;
}

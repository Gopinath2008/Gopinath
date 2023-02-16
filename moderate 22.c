#include<stdio.h>
typedef struct complex
{
	int real,imaginary;
}complex;
void addnumbers(complex x,complex y,complex *c);
void subnumbers(complex x,complex y,complex *c);
void mulnumbers(complex x,complex y,complex *c);
void divnumbers(complex x,complex y,complex *c);
int main()
{
	struct complex x,y,c;
	int choice;
	printf("Enter the value  first complex number:");
	scanf("%d%d",&x.real,&x.imaginary);
	printf("Enter the value of y of second complex number:");
	scanf("%d%d",&y.real,&y.imaginary);
	printf("Enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			addnumbers(x,y,&c);
			printf("Sum of complex numbers: %d + i%d",c.real,c.imaginary);
			break;
		case 2:
			subnumbers(x,y,&c);
			printf("Sub of complex numbers: %d - i%d",c.real,c.imaginary);
			break;
		case 3:
			mulnumbers(x,y,&c);
			printf("Mul of complex numbers: %d * i%d",c.real,c.imaginary);
			break;
		case 4:
			divnumbers(x,y,&c);
			printf("Div of complex numbers: %d/i%d",c.real,c.imaginary);
			break;
	}
}
void addnumbers(complex x,complex y,complex *c)
{
	c->real=x.real+y.real;
	c->imaginary=x.imaginary+y.imaginary;
}

void subnumbers(complex x,complex y,complex *c)
{
	c->real=x.real-y.real;
	c->imaginary=x.imaginary-y.imaginary;
}
void mulnumbers(complex x,complex y,complex *c)
{
	c->real=x.real*y.real;
	c->imaginary=x.imaginary*y.imaginary;
}
void divnumbers(complex x,complex y,complex *c)
{
	c->real=x.real/y.real;
	c->imaginary=x.imaginary/y.imaginary;
}

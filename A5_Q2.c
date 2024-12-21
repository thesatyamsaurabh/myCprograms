#include<stdio.h>
#include<conio.h>
struct complex
{
float r;
float img;
}c[2];
void main()
{
int i;
float a,b,e,f;
for(i=0;i<2;i++)
{
printf("Enter real and imaginary parts of %d complex number:",i+1);
scanf("%f%f",&c[i].r,&c[i].img);
}

a=c[0].r+c[1].r;
b=c[0].img+c[1].img;
printf("After addition real part is %f and complex part is %f\n",a,b);
e=c[0].r-c[1].r;
f=c[0].img-c[1].img;
printf("After subtraction real part is %f and complex part is %f",e,f);
getch();
}

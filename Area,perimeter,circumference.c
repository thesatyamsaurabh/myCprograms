#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
float l,b,r,a1,a2,p1,p2;
printf("Enter the length and breadth of a rectangle and radius of the circle\n");
scanf("%f%f%f",&l,&b,&r);
p1=2*(l+b);
printf("Perimeter of rectangle=%f\n",p1);
a1=l*b;
printf("Area of rectangle=%f\n",a1);
p2=2*pi*r;
printf("circumference of circle=%f\n",p2);
a2=pi*r*r;
printf("Area of circle=%f",a2);
getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
double f,l,c,r,x,y;
printf("enter the inductance in henrys:");
scanf("%lf",&l);
printf("enter the capacitance in farads:");
scanf("%lf",&c);
printf("enter the resistance in ohm:");
scanf("%lf",&r);
x=1/(l*c);
y=(r*r)/(4*c*c);
f=sqrt((x-y));
printf("frequency=%lf\n",f);
getch();
}

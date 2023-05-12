#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
main()
{
float r,area,circumference;
printf("Enter the radius of circle");
scanf("%f",&r);
 area=pi*r*r;
circumference=2*pi*r;
printf("\narea of circle=%f",area);
printf("\ncircumference of circle=%f",circumference);
getch();
}





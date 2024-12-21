#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("Enter the sides of traingle:");
scanf("%d%d%d",&a,&b,&c);
if(a<(b+c)&&b<(a+c)&&c<(a+b))
{
if(a==b&&c==b)
printf("equilateral traingle");
if(a==b&&b!=c||a!=b&&a==c||b==c&&b!=a)
printf("isosceles traingle");
if(a!=b&&b!=c)
printf("scalene traingle");
}
else
    printf("not form a traingle");
getch();
}

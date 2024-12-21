#include<stdio.h>
#include<conio.h>
#iclude<math.h>
void main()
{
double a,b,c,discriminant,root1,root2;
printf("Enter coefficient a,b and c ");
scanf("%lf%lf%lf",&a,&b,&c);
discriminant=b*b-4*a*c;
// conditions for real and different roots//
root1=(-b+sqrt(discriminant))/(2*a);
root2=(-b-sqrt(discriminant))/(2*a);
printf("root1=%.6lf and root=%.6lf",root1,root2);
getch();
}

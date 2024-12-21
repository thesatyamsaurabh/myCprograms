#include<stdio.h>
#include<conio.h>
#include<math.h>
int pw();
void main ()
{
                int power;
power=pw();
printf("%d",power);
}
int pw()
{
int a,b,s;
printf("enter two number:");
scanf("%d%d",&a,&b);
s=pow(a,b);
return s;
}

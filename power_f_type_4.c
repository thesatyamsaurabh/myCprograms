#include<stdio.h>
#include<conio.h>
#include<math.h>
int pw( int,int);
void  main()
{
int a,b,s,power;
printf("Enter two number:");
scanf("%d%d",&a,&b);
power=pw(a,b);
printf("Value of enterd data=%d",power);
getch();
}
int pw(int a,int b)
{
int s;
s=pow(a,b);
return s;
}

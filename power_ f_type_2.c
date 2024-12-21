#include<stdio.h>
#include<conio.h>
#include<math.h>
void pw(int,int);
void main()
{
int a,b;
printf("Enter two number:");
scanf("%d%d",&a,&b);
pw(a,b);
getch();
}
void pw(int a,int b)
{
int s;
s=pow(a,b);
printf("Value of enterd data is=%d",s);
}

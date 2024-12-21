#include<stdio.h>
#include<conio.h>
main()
{
int value,r;
printf("enter the number to be reversed ");
scanf("%d",&value);
do
{
r=value%10;
printf("%d",r);
value=value/10;
}while(value>0);
getch();
}

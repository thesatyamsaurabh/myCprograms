/*write a program to check wether a number is positive or not */
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x>0)
{
printf("positive number");
}
if (x<=0)
{
printf("non positive");
}
getch();
}

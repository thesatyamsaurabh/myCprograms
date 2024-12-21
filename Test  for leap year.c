#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int y;
printf("enter the year you want to check");
scanf("%d",&y);
(y%100!=0&&y%4==0&&printf("leap year"))||
(y%100==0&&y%400==0&&printf("leap"))||
printf("Non Leap");
getch();
}

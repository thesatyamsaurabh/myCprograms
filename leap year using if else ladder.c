//chheck for leap year
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int y;
printf("enter the year you want to check\n");
scanf("%d",&y);
if(y%100==0&&y%400==0)
                   printf("leap year");
else if(y%100!=0&&y%4==0)
    printf("leap year");
else
    printf("not a leap year");
getch();
}

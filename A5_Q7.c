#include<stdio.h>
#include<conio.h>
struct date
{
int day;
int month;
int year;
}d[2];
void main()
{
int i;
for(i=0;i<2;i++)
{
printf("Enter %d date:",i+1);
scanf("%d%d%d",&d[i].day,&d[i].month,&d[i].year);
}
if(d[0].day==d[1].day&&d[0].month==d[1].month&&d[0].year==d[1].year)
printf("Dates are equal:");
else
printf("Dates are not equal:");
getch();
}

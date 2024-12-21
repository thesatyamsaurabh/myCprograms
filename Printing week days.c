#include<stdio.h>
#include<conio.h>
main()
{
int i;
printf("enter the positions of week days:");
scanf("%d",&i);
if(i==1)
printf("MONDAY");
else if(i==2)
printf("TUESDAY");
else if(i==3)
printf("WEDNESDAY");
else if(i==4)
printf("THURSDAY");
else if(i==5)
printf("FRIDAY");
else if(i==6)
printf("SATURDAY");
else if(i==7)
printf("SUNDAY");
else
printf("invalid choice");
getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k;
printf("Enter the date,month,year");
scanf("%d%d%d",&i,&j,&k);
if((j==1||j==3||j==5||j==7||j==8||j==10||j==12)&&(i<=31&&i>=1))
printf("date is valid");
else if((j==4||j==6||j==9||j==11)&&(i>=1&&i<=30))
printf("date is valid");
else if((j==2)&&(i>=1&&i<=29)&&((k%400==0)||(k%100!=0&&k%4==0)))
printf("Date is valid");
else if((j==2)&&(k%100!=0&&k%4!=0)&&(i>0&&i<=28))
printf("date is valid");
else
printf("date is not valid");
getch();
}

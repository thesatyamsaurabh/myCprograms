#include<stdio.h>
#include<conio.h>
main()
{
int r,s=0,t=1,n,i;
printf("Enter the number in Decimal number in system:");
scanf("%d",&n);
for(i=n;i>0;i=i/2)
{
r=i%2;
s=s+(t*r);
t=t*10;
}
printf("Binary number=%d",s);
getch();
}

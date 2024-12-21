//reverse printing of digits of a number using for loop
#include<stdio.h>
#include<conio.h>
main()
{
int i,n,r;
printf("Enter the five digit number:");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
r=n%10;
printf("%d",r);
n=n/10;
}
getch();
}

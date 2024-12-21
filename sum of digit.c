//printing sum of digit
#include<stdio.h>
#include<conio.h>
main()
{
int n,r,sum=0;
printf("Enter the digit");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum=%d",sum);
getch();
}

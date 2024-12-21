#include<stdio.h>
#include<conio.h>
main()
{
double n,i,f=1;
printf("Enter a number");
scanf("%lf",&n);
if(n==0)
printf("1");
else
{
for(i=n;i>=1;i--)
f=f*i;
printf("factorial of n=%lf",f);
}
getch();
}

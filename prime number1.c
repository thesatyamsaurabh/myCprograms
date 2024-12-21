#include<stdio.h>
#include<conio.h>
main()
{
int x,i;
printf("enter a number");
scanf("%d",&x);
for(i=2;i<=x-i;i++)
  if(x%i==0)
  break;
if(i==x)
printf("%d is prime number",x);
else
printf("%d is not a prime number",x);
getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
int r,n,s=0;
printf("Enter a Number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=r+(s*10);
n=n/10;
}
printf("\nreverse of number s=%d",s);
getch();
}

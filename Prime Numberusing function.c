#include<stdio.h>
#include<conio.h>
void fp(int);
void main()
{
int n;
printf("Enter a positive integer:");
scanf("%d",&n);
fp(n);
getch();
}
void fp(int n)
{
     int i;
for(i=2;i<=n-1;i++)
if(n%i==0)
break;
if(i==n)
printf("Prime number");
else
printf("Not Prime");
}


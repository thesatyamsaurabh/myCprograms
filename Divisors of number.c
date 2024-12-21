#include<stdio.h>
#include<conio.h>
void pf(int);
void main()
{
int n;
printf("Enter number for prime factor:");
scanf("%d",&n);
if(n==0)
printf("0");
else if(n==1)
printf("1");
else
pf(n);
getch();
}
void pf(int n)
{
int i,j,count;
for(i=1;i<=n;i++)
if(n%i==0)
printf("%d ",i);
}

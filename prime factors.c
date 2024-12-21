#include<stdio.h>
#include<conio.h>
void pf(int);
void main()
{
int n;
printf("Enter number for prime factors:");
scanf("%d",&n);
pf(n);
getch();
}
void pf(int n)
{
int i;
for(i=2;n>1;i++)
{
while(n%i==0)
{
printf("%d ",i);
n=n/i;
}
}
}

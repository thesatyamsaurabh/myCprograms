#include<stdio.h>
#include<conio.h>
int sd(int);
void main()
{
int n,k;
printf("Enter the number:");
scanf("%d",&n);
k=sd(n);
printf("Sum of digit of %d=%d",n,k);
getch();
}
int sd(int n)
{
int r,i,s=0;
for(i=0;i<5;i++)
{
r=n%10;
s=s+r;
n=n/10;
}
return s;
}

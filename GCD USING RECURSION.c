#include<stdio.h>
#include<conio.h>
int gcd(int n1,int n2);
void main()
{
int n1,n2;
printf("Enter the two positive integer:");
scanf("%d%d",&n1,&n2);
printf("gcd of %d and %d is %d",n1,n2,gcd(n1,n2));
getch();
}
int gcd(int n1,int n2)
{
if(n1==0)
return n2;
if(n2==0)
return n1;
if(n1>n2)
return gcd(n1%n2,n2);
if(n2>n1)
return gcd(n1,n2%n1);
}

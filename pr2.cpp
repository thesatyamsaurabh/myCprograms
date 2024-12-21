#include<stdio.h>
#include<conio.h>
#include<math.h>
int armn(int);
int main()
{
int n,s;
printf("Enter number you want to check for armstrong:");
scanf("%d",&n);
s=armn(n);
if(s==n)
printf("Armstrong Number:");
else
printf("Not armstrong number:");
return 0;
getch();
}
int armn(int a)
{
int k,l=0,r,c=0,t;
t=a;
while(a>0)
{
	r=a%10;
	c++;
	a=a/10;
}
while(t>0)
{
	k=t%10;
	l=l+pow(k,c);
	t=t/10;
}
return l;
}

#include<stdio.h>
#include<conio.h>
void main()
{
 int s=0,count=0,r=0,i,t=1,m=0,l;
long int n;
printf("Enter the number in binary number system:");
scanf("%ld",&n);
while(n>0)
{
r=n%10;
count++;
s=s+(pow(2,count-1))*r;
n=n/10;
}
while(s>0)
{
l=s%8;
m=m+(l*t);
t=t*10;
s=s/8;
}
printf("Octal number=%d",m);
getch();
}

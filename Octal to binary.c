#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,r,s=0,i=0,k,t=1;
long int l=0;
printf("Enter the octal number:");
scanf("%d",&n);
while(n >0)
{
r=n%10;
s=s+(pow(8,i))*r;
i++;
n=n/10;
}
while(s>0)
{
k=s%2;
l=l+(k*t);
t=t*10;
s=s/2;
}
printf("Binary number=%ld",l);
getch();
}

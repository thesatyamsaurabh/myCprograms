//My Armstrong number Program
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int r,n,s=0,x,count=0,i,k,p;
printf("Enter the number you want to check for Armstrong:");
scanf("%d",&n);
x=n;
p=n;
while(n>0)
{
r=n%10;
count++;
n=n/10;
}
printf("It is a %d digit number\n",count);
for(i=1;i<=count;i++)
{
 k=p%10;
 s=s+pow(k,count);
 p=p/10;
}
if(s==x)
printf("Armstrong Number");
else
printf("Not Armstrong Number");
getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
void AmN(int);
void main()
{
int n;
printf("Enter the number to check for Armstrong Number:");
scanf("%d",&n);
AmN(n);
getch();
}
void AmN(int n)
{
int c,i,r,k,s=0,y,p;
y=n;
p=n;
while(p>0)
{
r=p%10;
c++;
p=p/10;
}
for(i=1;i<=c;i++)
{
k=n%10;
s=s+pow(k,c);
n=n/10;
}
if(y==s)
printf("Armstrong Number");
else
printf("Not Armstrong Number");
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n;
float s=0,s2=0,x,m,sd,v;
printf("Enter the number of observation:");
scanf("%d",&n);
if(n<2)
printf("At least 2 values must be enterd\n");
else
{
for(i=1;i<=n;i++)
{
printf("Enter value%d:",i);
scanf("%f",&x);
s=s+x;
s2=s2+pow(x,2);
}
m=s/n;
v=(n*s2-pow(s,2))/(n*(n-1));
sd=sqrt((n*s2-pow(s,2))/(n*(n-1)));
printf("Mean=%f\n",m);
printf("Variance=%f\n",v);
printf("Standard deviation=%f\n",sd);
}
getch();
}

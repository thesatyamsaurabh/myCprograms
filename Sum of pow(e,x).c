#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double x,n,i,f=1,s=1;
printf("Enter the value of x and number of terms");
scanf("%lf%lf",&x,&n);
if(n==0)
printf("1");
for(i=1;i<=n;i++)
{
f=f*i;
s=s+(pow(x,i))/f;
}
printf("sum=%lf",s);
getch();
}

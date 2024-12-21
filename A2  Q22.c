#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,f=1,n;
float x,s=1;
printf("Enter the value of x:");
scanf("%f",&x);
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n-1;i++)
{
f=f*i;
s=s+(pow(x,i))/f;
}
printf("sum=%f",s);
if(n==1)
    printf("1");
getch();
}
}

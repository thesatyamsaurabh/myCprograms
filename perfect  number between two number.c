#include<stdio.h>
#include<conio.h>
main()
{
int m,n,x,i,sum;
printf("Enter two number");
scanf("%d%d",&m,&n);
 for(x=m;x<=n;x++)
 {
sum=0;
for(i=1;i<=x/2;i++)
 if(x%i==0)
    sum=sum+i;
    if(sum==x)
     printf("  %d",x);
     }
     getch();
     }

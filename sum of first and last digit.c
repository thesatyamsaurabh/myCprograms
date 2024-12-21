#include<stdio.h>
#include<conio.h>
main()
{
int f,n,r;
printf("enter the digit");
scanf("%d",&n);
f=n%10;
while(n>0)
{r=n%10;
n=n/10;
}
printf("sum=%d",f+r);
getch();
}

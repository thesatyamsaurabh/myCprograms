#include<stdio.h>
#include<conio.h>
main()
{
int m,n,i,x;
printf("Enter two number");
scanf("%d%d",&m,&n);
  for(x=m;x<=n;x++)
    {
  for(i=2;i<=x-1;i++)
  if(x%i==0)
  break;
  if(i==x)
  printf("  %d",x);
  }
  getch();
  }

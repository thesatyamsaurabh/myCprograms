//printing of number upto n terms and their sum
#include<stdio.h>
#include<conio.h>
main()
{
int i,m,sum;
printf("enter the number");
scanf("%d",&m);
for(i=1;i<=m;i++)
{
printf(" %d",i);
}
sum=(m*(m+1))/2;
printf("sum=%d\n",sum);
getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int i,n,p=0;
printf("enter the number upto which you want the sum");
scanf("%d",&n);
for(i=1;i<=n;i++)
p=p+pow(10,i)-1;
printf("sum=%d",p);
getch();
}

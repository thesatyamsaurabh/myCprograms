#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,s=0,i;
float a;
printf("enter the 10 numbers");
scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
for(i=n1;i<=n10;i++)
{
s=s+i;
}
printf("sum of number=%d\n",s);
a=s/10;
printf("avg of numbers=%f",a);
getch();
}

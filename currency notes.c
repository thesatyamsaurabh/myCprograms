#include<stdio.h>
#include<conio.h>
main()
{
int n,a,b,c,d,e;
printf("enter the amount");
scanf("%d",&n);
a=n/100;
printf("100 currency notes=%d\n",a);
b=n%100;
c=b/50;
printf("50 currency notes=%d\n",c);
d=b%50;
e=d/10;
printf("10 currency notes=%d\n",e);
getch();
}

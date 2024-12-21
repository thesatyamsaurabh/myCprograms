            //swapping in cyclic order
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d;
printf("enter the three number a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=a;
a=b;
b=c;
c=d;
printf("a=%d\n",a);
printf("b=%d\n",b);
printf("c=%d\n",c);
getch();
}


//write a program swap of two number without using third variable
#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
printf("enter two number a and b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a=%d\n",a);
printf("value of b=%d",b);
getch();
}

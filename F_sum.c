#include<stdio.h>
#include<conio.h>
void  sum();
void main()
{
                printf("Going to calculate sum of two number\n");
sum();
getch();
}
void sum()
{
int a,b,s=0;
printf("Enter two number:");
scanf("%d%d",&a,&b);
s=a+b;
printf("Sum of %d and %d is %d",a,b,s);
}

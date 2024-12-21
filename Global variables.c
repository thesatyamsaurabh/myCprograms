#include<stdio.h>
#include<conio.h>
void exchange(int,int);
int x,y;
void main()
{
printf("Enter the two number whose value to be exchange:");
scanf("%d%d",&x,&y);
exchange(x,y);
getch();
}
void exchange(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("After interchange value of x=%d and y=%d",x,y);
}

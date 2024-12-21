#include<stdio.h>
#include<conio.h>
main()
{
int x,y,z;
printf("enter the three number x,y,z whose value to be rotated");
scanf("%d%d%d",&x,&y,&z);
x=x+y+z;
z=x-(y+z);
y=x-(y+z);
x=x-(y+z);
printf("value of x=%d\n",x);
printf("value of y=%d\n",y);
printf("value of z=%d\n",z);
getch();
}

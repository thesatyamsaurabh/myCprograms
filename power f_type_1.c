#include<stdio.h>
#include<conio.h>
#include<math.h>
void pw();
void main()
{
pw();
getch();
}
void pw()
{

                int x,y,s;
                printf("Enter two number:");
               scanf("%d%d",&x,&y);
               s=pow(x,y);
printf("Value of enterd data is=%d",s);
}

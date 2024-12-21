#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
if(i==1||i==4||i==5)
   { if((i+j)%2==0)
printf(" 1");
else
printf(" 0");
}
if(i==2||i==3)
{
if(((i+j)%2)!=0)
printf(" 1");
else
printf(" 0");
}
}
printf("\n");
}
getch();
}

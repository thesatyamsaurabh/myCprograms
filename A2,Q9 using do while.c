#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
i=1;
do
{
j=5;
do
{
printf(" ");
}while(--j>i);
j=1;
do
{
printf("%d ",i);
}while(++j<=i);
printf("\n");
}while(++i<=5);
getch();
}

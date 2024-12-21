#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,k=1;
printf("Enter the number to define the rows in Floyd traingle:\n");
scanf(" %d",&n);
i=1;
do
{
 i++;
 do
  {
  j=1;
  printf(" %2d",k++);//print the number
  }while(j<=i)
  printf("\n");
  j++;
  }while(i<=n);
  getch();
  }

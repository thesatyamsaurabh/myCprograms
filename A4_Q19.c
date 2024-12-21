#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],i,j,m,n;
int *ptr[20][20];
printf("Enter the order of your matrix:");
scanf("%d%d",&m,&n);
printf("Enter the element your matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
ptr[i][j]=&a[i][j];
}
}
printf("Matrix you have entered is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",*ptr[i][j]);
}
printf("\n");
}
getch();
}

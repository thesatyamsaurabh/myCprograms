#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[20][20],n;
printf("Enter the order of a matrix:");
scanf("%d",&n);
printf("Enter the element of a matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix you have entered:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
printf("For left diagonal element:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
printf(" %d",a[i][j]);
}
}
printf("\nRight diagonal element:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((i+j)==n-1)
printf(" %d",a[i][j]);
}
}
getch();
}

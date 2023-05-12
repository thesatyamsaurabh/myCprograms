#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[4][4];
printf("Input the element of a matrix of order 4x4:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix is:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
printf("The transpose of a given matrix is:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
printf(" %d",a[j][i]);
}
printf("\n");
}
getch();
}

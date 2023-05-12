#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],b[100][100],c[100][100],i,j,m,n;
int *ptr[100][100],*ptr1[100][100],*ptr2[100][100];
printf("Enter your order of matrix:");
scanf("%d%d",&m,&n);
printf("Enter the element of your first matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
ptr1[i][j]=&a[i][j];
}
}
printf("The  first matrix you have  entered is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%4d",*ptr1[i][j]);
}
printf("\n");
}
printf("Enter the element of your second matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
ptr2[i][j]=&b[i][j];
}
}
printf("The  second matrix you have  entered is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%4d",*ptr2[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=*ptr1[i][j]+*ptr2[i][j];
ptr[i][j]=&c[i][j];
}
}
printf("After addition of these two matrices resultant matrix is :\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%4d",*ptr[i][j]);
}
printf("\n");
}
getch();
}

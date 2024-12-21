#include<stdio.h>
#include<conio.h>
void mlt(int[20][20],int[20][20],int,int,int);
void main()
{
int a[20][20],b[20][20],i,j,m,n,k;
printf("Enter the no row of your first matrix:");
scanf("%d",&m);
printf("Enter the no column of first matrix and row of second matrix:");
scanf("%d",&n);
printf("Enter the no column of second matrix:");
scanf("%d",&k);
printf("Enter the element of your first matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("First matrix you have entered is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
printf("Enter the element of your second matrix:");
for(i=0;i<n;i++)
{
for(j=0;j<k;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("The second matrix you have entered is: \n");
for(i=0;i<n;i++)
{
for(j=0;j<k;j++)
{
printf(" %d",b[i][j]);
}
printf("\n");
}
mlt(a,b,m,n,k);
getch();
}
void mlt(int a[20][20],int b[20][20],int m,int n,int k)
{
int c[20][20],i,j,r,s;
for(i=0;i<m;i++)
{
for(j=0;j<k;j++)
{
                s=0;
for(r=0;r<n;r++)
{
s=s+a[i][r]*b[r][j];
}
c[i][j]=s;
}
}
printf("your resultant matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<k;j++)
{
printf("  %d",c[i][j]);
}
printf("\n");
}
}

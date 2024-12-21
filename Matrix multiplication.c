#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m,n,k,a[20][20],b[20][20],c[20][20],s,r;
printf("Enter the number of row of first matrix:");
scanf("%d",&m);
printf("Enter the number of column first and row of second matrix:");
scanf("%d",&n);
printf("Enter the column of second matrix:");
scanf("%d",&k);
printf("Enter the element of first matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nYour first matrix is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
printf("\nEnter the element of second matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<k;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Second matrix you have entered is:\n");
for(i=0;i<n;i++)
{
for(j=0;j<k;j++)
{
printf(" %d",b[i][j]);
}
printf("\n");
}
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
printf("Your resultant matrix is:\n");
for(i=0;i<m;i++)
 {
for(j=0;j<k;j++)
{
   printf(" %d",c[i][j]);
}
printf("\n");
 }
 getch();
}

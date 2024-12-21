#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],m,n,i,j,s=0,k;
printf("Enter the order of your matrix:");
scanf("%d%d",&m,&n);
printf("Enter the element of your matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix you have entered is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("  %d",a[i][j]);
}
printf("\n");
}
k=a[0][0];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[0][0]<=a[i][j])
{
a[0][0]=a[i][j];
k=a[0][0];
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]<k)
s=a[i][j];
}
}
printf("Second largest element of the given matrix=%d",s);
getch();
}

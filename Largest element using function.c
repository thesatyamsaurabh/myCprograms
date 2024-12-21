#include<stdio.h>
#include<conio.h>
int large(int [20][20],int,int);
void main()
{
int i,j,a[20][20],m,n,max;
printf("Enter the order of your matrix:");
scanf("%d%d",&m,&n);
printf("Enter the element of your matrix:\n");
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
printf(" %d",a[i][j]);
}
printf("\n");
}
max=large(a,m,n);
printf("The largest element of a MxN matrix=%d",max);
getch();
}
int large(int a[20][20],int m,int n)
{
int i,j,k;
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
return k;
}

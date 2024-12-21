#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[20][20],n,count=0;
printf("Enter the order of your square matrix:");
scanf("%d",&n);
printf("Enter the element of your matrix:");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix you have entered is:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]==a[j][i])
count++;
}
}
if(count==n*n)
printf("Symmetric matrix:");
else
printf("Not symmetric:");
getch();
}







































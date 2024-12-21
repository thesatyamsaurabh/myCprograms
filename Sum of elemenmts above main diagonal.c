#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],n,i,j,s=0;
printf("Enter the order of your matrix:");
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
printf("  %d",a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j-1)
s=s+a[i][j];
}
}
printf("Sum of the elements above  main diagonal element=%d",s);
getch();
}

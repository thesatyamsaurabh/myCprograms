#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[5][5],max;
printf("Enter the element of your matrix:");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf(" %d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
max=a[0][0];
if(a[0][0]<=a[i][j])
a[0][0]=a[i][j];
max=a[0][0];
}
}
printf("Largest element of this given matrix=%d",max);
getch();
}

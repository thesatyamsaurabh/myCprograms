#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[30];
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the value:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf(" a[%d]=%d",i,a[i]);
}
getch();
}

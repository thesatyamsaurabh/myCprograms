#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,k,s;
printf("Enter the number of elements in your array:");
scanf("%d",&n);
printf("Enter the elements of your array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=a[0];
for(i=0;i<n;i++)
{
if(a[0]<=a[i])
{
a[0]=a[i];
k=a[0];
}
}
for(i=0;i<n;i++)
{
if(a[i]<k)
s=a[i];
}
printf("Second largest element of this given array=%d",s);
getch();
}

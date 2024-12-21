#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,s=0,n;
int *ptr1[100];
printf("Enter the number of elements in your array:");
scanf("%d",&n);
printf("Enter the elements of your array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
ptr1[i]=&a[i];
}
for(i=0;i<n;i++)
{
s=s+(*ptr1[i]);
}
printf("Sum of elements of your entered array is:%d",s);
getch();
}

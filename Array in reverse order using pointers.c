#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[100],n,temp[100];
int *ptr1[100],*ptr2[100];
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
temp[i]=a[n-i-1] ;
}
for(i=0;i<n;i++)
{
 ptr2[i]=&temp[i];
 }
printf("Array in reverse order is:");
for(i=0;i<n;i++)
    printf("%d\t",*ptr2[i]);

getch();
//getch();
}

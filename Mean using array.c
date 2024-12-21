#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[20],sum=0;
float mean=0;
printf("Enter the number of data:");
scanf("%d",&n);
printf("Enter the value of data:");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
sum+=a[i];
mean=sum/n;
printf("Sum of given data=%d",sum);
printf("\nMean of given data=%.2f",mean);
getch();
}

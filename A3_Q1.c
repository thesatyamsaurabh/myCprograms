#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[25],c=0,k;
printf("Enter 25 numbers:");
for(i=0;i<25;i++)
{
scanf("%d",&a[i]);
}
printf("Enter a number:");
scanf("%d",&k);
for(i=0;i<25;i++)
{
if(a[i]==k)
c++;
}
if(c==0)
printf("Number is not present:\n");
if(c!=0)
printf("Number present is %d times:",c);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[25],o=0,e=0,count=0,s=0;
printf("Enter the 25 numbers:");
for(i=0;i<25;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<25;i++)
{
if(a[i]>0)
count++;
if(a[i]<0)
 s=s+1;
 if(a[i]%2==0)
  e++;
 if((a[i]%2)!=0)
   o++;
}
printf("Number of positive entries=%d\n",count);
printf("Number of Negative entries=%d\n",s);
printf("Number of odd entries=%d\n",o);
printf("Number of even entries=%d\n",e);
getch();
}

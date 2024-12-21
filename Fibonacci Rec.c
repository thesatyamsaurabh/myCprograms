#include<stdio.h>
#include<conio.h>
int fb(int);
void main()
{
int i,n;
printf("Enter the number of terms for fibonacii series:");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf(" %d",fb(i));
getch();
}
int fb(i)
{
if(i==1||i==2)
return(1);
else
return(fb(i-1)+fb(i-2));
}

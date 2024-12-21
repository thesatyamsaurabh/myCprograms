#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
int s,n;
printf("Enter the range:");
scanf("%d",&n);
s=sum(n);
printf("Sum=%d",s);
getch();
}
int sum(int n)
{
if(n==0)
return 0;
else
return(n+sum(n-1));
}

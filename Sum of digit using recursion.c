#include<stdio.h>
#include<conio.h>
int sd(int);
void main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Sum of digit=%d",sd(n));
getch();
}
int sd(n)
{
if(n==0)
return(0);
else
return(n%10+sd(n/10));
}

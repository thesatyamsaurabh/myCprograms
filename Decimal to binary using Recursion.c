#include<stdio.h>
#include<conio.h>
void bin(int);
void main()
{
                int n;
printf("Enter a number in decimal number system:");
scanf("%d",&n);
if(n==0)
printf("0");
else
bin(n);
getch();
}
void bin(int n)
{
if(n==0)
return ;
else
bin(n/2);
printf("%d",n%2);
}

#include<stdio.h>
#include<conio.h>
main()
{
int c,n,r,s=0;
printf("enter a number");
scanf("%d",&n);
c=n;
while(n>0)
{
r=n%10;
s=r+(s*10);
n=n/10;
}
if(c==s)
printf("palindrome number");
else
printf("not palindrome number");
getch();
}

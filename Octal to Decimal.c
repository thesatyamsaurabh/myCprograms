#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int r,s=0,i=0,n;
printf("Enter the octal number:");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+(pow(8,i))*r;
i++;
n=n/10;
}
printf("Decimal number=%d",s);
getch();
}

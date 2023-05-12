#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
long int s=0,count=0,n,r;
printf("Enter the number in binary number system:");
scanf("%ld",&n);
while(n>0)
{
r=n%10;
count++;
s=s+(pow(2,count-1))*r;
n=n/10;
}
printf("Number in Decimal number system=%ld",s);
getch();
}

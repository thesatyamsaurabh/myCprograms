#include<stdio.h>
#include<conio.h>
void main()
{
float n,i,s=0;
printf("Enter the number of terms for the sum:");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
s=s+(1/i);
}
printf("sum=%f",s);
getch();
}

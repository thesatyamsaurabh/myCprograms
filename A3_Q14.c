#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
int n,s;
printf("Enter the number:");
scanf("%d",&n);
s=prime(n);
printf("%d",s);
getch();
}
int prime(int n)
{
int i,count=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
return 1;
else
return 0;
}

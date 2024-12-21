//number after adding 1 to each of its digit like 12391 have output 23402
#include<stdio.h>
#include<conio.h>
int main()
{
int n,r,s=0;
printf("Enter the digit");
scanf("%d",&n);
while(n>0)
{
r=n%10;
r=r+1;
if(r==10)
    r=0;
s=(s*10)+r;
n=n/10;
}
n=s;
s=0;
while(n>0)
{
r=n%10;
s=(s*10)+r;
n=n/10;
}
n=s;
printf("number after adding 1 to each of its digit=%d",s);
getch();
}

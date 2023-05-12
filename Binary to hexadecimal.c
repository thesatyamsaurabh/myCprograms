#include<stdio.h>
#include<conio.h>
void main()
{
long int i=1,b,h=0,r,k=1,s1=0,m,j;
printf("Enter binary number:");
scanf("%ld",&b);
for(b!=0;b>0;b=b/10)
{
r=b%10;
h=h+(r*i);
i=i*2;
}
for(j=1;j<=h;h=h/16)
{
 m=h%16;
 s1=s1+(m*k);
   k=k*10;
}
printf("hexadecimal number=%lx",s1);
getch();
}

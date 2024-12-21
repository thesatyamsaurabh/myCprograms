#include<stdio.h>
#include<conio.h>
int fact(int);
float xpowern(float,int);
float compute(float,int,int);
void main()
{
int n,sign;
float x,s;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("Enter the value of x:");
scanf("%f",&x);
if(n%2==0)
sign=-1;
else
sign=1;
fact(n);
xpowern(x,n);
s=compute(x,n,sign);
printf("F(x)=%f",s);
getch();
}
int fact(int n)
{
if(n==1)
return 1;
else
return n*fact(n-1);
}
float xpowern(float x,int n)
{
if(n==1)
return x;
else
return x*xpowern(x,n-1);
}
float compute(float x,int n,int sign)
{
if(n==1)
return x;
else
return(sign*xpowern(x,n)/fact(n)+compute(x,n-2,-1*sign));
}


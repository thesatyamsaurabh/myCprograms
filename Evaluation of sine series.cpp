#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int);
float xpowern(float,int);
float compute(float, int,int);
int main()
{
int n,sign,k;
float x,s;
printf("Enter number of terms:");
scanf("%d",&k);
n=2k-1;
printf("Enter Value of x:");
scanf("%f",&x);
if(n%2==0)
sign=-1;
else
sign=1;
fact(n);
xpowern(x,n);
s=compute(x,n,sign);
printf("F(x)=%f",s);
return 0;
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
	return (sign*xpowern(x,n))/fact(n)+compute(x,n-2,sign); 
}

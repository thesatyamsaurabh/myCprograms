#include<stdio.h>
#include<conio.h>
void lcm(int,int,int);
void main()
{
int n1,n2,n3;
printf("Enter the three number for lcm:");
scanf("%d%d%d",&n1,&n2,&n3);
lcm(n1,n2,n3);
getch();
}
void lcm(int n1,int n2,int n3)
{
int g,k,s;
s=n1*n2*n3;
k=s;
while(k>1)
{
if(k%n1==0 && k%n2==0 && k%n3==0)
{
g=k;
}
k--;
}
printf("lcm of these three number=%d",g);
}

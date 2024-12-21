#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,G,count=1;
printf("Enter two numbers:");
scanf("%d%d",&n1,&n2);
while(count<=n1 && count<=n2)
{
if(n1%count==0 && n2%count==0)
{
    G=count;
}
count++;
}
printf("GCD of %d and %d is %d",n1,n2,G);
getch();
}

#include<stdio.h>
#include<conio.h>
void hcf(int,int,int);
void main()
{
int n1,n2,n3;
printf("Enter the three number for hcf:");
scanf("%d%d%d",&n1,&n2,&n3);
hcf(n1,n2,n3);
getch();
}
void hcf(int n1,int n2,int n3)
{
int k=1,g;
while(k<=n1 && k<=n2 && k<=n3)
{
if(n1%k==0 && n2%k==0 && n3%k==0)
{
g=k;
}
k++;
}
printf("hcf=%d",g);
}

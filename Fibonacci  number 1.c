//fibonacci number using for loop
#include<stdio.h>
#include<conio.h>
main()
{
int n1=1,n2=0,n3,i,n;
printf("Enter the number of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
n3=n1+n2;
printf(" %d",n3);
n1=n2;
n2=n3;
}
getch();
}

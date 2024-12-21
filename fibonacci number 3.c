//fibonacci number using while
#include<stdio.h>
#include<conio.h>
main()
{
int n1=1,n2=0,n3,n,i;
printf("Enter the number of terms you want to print:");
scanf("%d",&n);
i=1;
while(i<=n)
{
n3=n1+n2;
printf(" %d",n3);
n1=n2;
n2=n3;
i++;
}
getch();
}

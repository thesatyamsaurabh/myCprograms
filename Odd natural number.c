//Printing of n odd number and their sum//
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,sum=0;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
printf(" %d",i);
if(i%2!=0)
sum=sum+i;
}
printf("\nsum=%d",sum);
getch();
}

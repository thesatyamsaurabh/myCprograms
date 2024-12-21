#include<stdio.h>
#include<conio.h>
main()
{
int choice,a,b,s;
printf("\n1.Addition");
printf("\n2.Odd-Even");
printf("\n3.Printing N number");
printf("\n\nEnter your choice");
scanf("%d",&choice);
switch(choice)
{
   case 1:
printf("Enter two numbers");
scanf("%d%d",&a,&b);
s=a+b;
printf("sum is %d\n",s);
break;
  case 2:
printf("Enter a number");
scanf("%d",&a);
if(a%2==0)
printf("Even number");
else
printf("odd number");
break;
  case 3:
  printf("Enter a number");
  scanf("%d",&a);
  for(b=1;b<=a;b++)
  printf(" %d",b);
  break;
default:
printf("invalid choice");
}
getch();
}


#include<stdio.h>
#include<conio.h>
void main()
{
int u,i;
float r;
for(i=1;i<=6;i++)
{
printf("Enter the amounts of units of customer%d:",i);
scanf("%d",&u);
if(u>=0 && u<=200)
{
r=u*0.50;
printf("  Amounts to be paid by customer%d=%f\n",i,r);
}
if(u>=201&&u<=400)
{
  r=100+u*0.65;
  printf("  Amounts to be paid by the customer%d=%f\n",i,r);
}
if(u>=401&&u<=600)
{
                r=230+u*0.80;
                printf("  Amounts to be paid by the customer%d=%f\n",i,r);

}
if(u>=601)
      {
                      r=390+u*1;
printf("  Amounts to be paid by customer%d=%f\n",i,r);
}
}
getch();
}

#include<stdio.h>
#include<conio.h>
void display(struct customer, int);
struct customer
{
int acn;
char n[30];
int b;
}c[50];
void main()
{
int k,i,l,ac,co,a;
printf("Enter number of customer:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("\t\tEnter %d customer details:\n",i+1);
printf("Enter Account number,Name and balance:");
scanf("%d%s%d",&c[i].acn,c[i].n,&c[i].b);
}
display(c[50],k);
printf("\nFor withdrawal enter 0 \nfor deposit enter 1:\n");
scanf("%d",&l);
if(l==0)
{
printf("Enter your Account number,Amount and co:");
scanf("%d%d%d",&ac,&a,&co);
}
if(a<100)
printf("The balance is insufficient for the specified withdrawal or deposit:");
getch();
}
void display(struct customer c[50],int k)
{
int j;
for(j=0;j<k;j++)
{
if(c[j].b<100)
{
printf("Below given Customer has balance less than 100:\n");
printf("%d\t%s",c[j].acn,c[j].n);
}}}



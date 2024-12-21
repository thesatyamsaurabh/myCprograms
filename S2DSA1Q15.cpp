#include<stdio.h>
#include<conio.h>
int main ()
{
int i,j,a[5][3],s;
for(i=0;i<5;i++)
{
printf("\t\tEnter the sales of salesman %d:\n",i+1);
for(j=0;j<3;j++)
{
printf("Enter the sales of product %d:",j+1);
scanf("%d",&a[i][j]);
}}
for(i=0;i<5;i++)
{
	s=0;
	for(j=0;j<3;j++)
	{
		s+=a[i][j];
	}
		printf("Total sales by salesman %d is %d:\n",i+1,s);
		}
for(j=0;j<3;j++)
{
	s=0;
	for(i=0;i<5;i++)
	{
		s=s+a[i][j];
	}
	printf("Sales of product %d is %d:\n",j+1,s);
}
getch();
return 0;
}

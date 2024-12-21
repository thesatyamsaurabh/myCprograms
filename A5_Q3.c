#include<stdio.h>
#include<conio.h>
struct student
{
char name[100];
int roll;
float marks;
};
struct number
{
int k;
struct student s[100];
};
void main()
{
struct number n;
int i,k;
printf("Enter number of student:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("Enter the details of %d student i.e. name,roll and marks:",i+1);
scanf("%s",n.s[i].name);
scanf("%d",&n.s[i].roll);
scanf("%f",&n.s[i].marks);
}
printf("Display information:\n");
for(i=0;i<k;i++)
{
printf("\nInformation of %d student:\n",i+1);
printf("Name of student:%s\n",n.s[i].name);
printf("Roll number:%d\n",n.s[i].roll);
printf("Marks=%f\n",n.s[i].marks);
}
getch();
}

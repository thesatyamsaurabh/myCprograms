#include<stdio.h>
#include<conio.h>
struct date
{
int day;
int month;
int year;
};
struct employee
{
int code;
char name[20];
struct date d[100];
};
void main()
{
struct employee e[100];
int k,l,m,i,n;
printf("Enter number of employee:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\tEnter employee %d details:\n",i+1);
printf("Enter code,name and date of joining:");
scanf("%d%s%d%d%d",&e[i].code,e[i].name,&e[i].d[i].day,&e[i].d[i].month,&e[i].d[i].year);
}
printf("Enter current day,month and year:");
scanf("%d%d%d",&k,&l,&m);
for(i=0;i<n;i++)
{
if((m-e[i].d[i].year)>3)
printf("%s",e[i].name);
else if((m-e[i].d[i].year)==3&&(l-e[i].d[i].month)>0)
printf("%s",e[i].name);
else if((m-e[i].d[i].year)==3&&(l-e[i].d[i].month)==0&&(k-e[i].d[i].day)>0)
printf("%s",e[i].name);
}
getch();
}


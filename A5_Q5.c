#include<stdio.h>
#include<conio.h>
struct date
{
int day;
int month;
int year;
};
struct patient
{
char name[30];
int code;
char sex;
int age;
int wn;
int bn;
char ni[30];
struct date d[50];
};
void main()
{
struct patient p[100];
int n,i;
printf("Enter number of patient:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter record of %d patient:\n",i+1);
printf("Enter name of patient:");
scanf("%s",p[i].name);
printf("Enter patient code:");
scanf("%d",&p[i].code);
printf("Enter sex of patient:");
scanf("%c",&p[i].sex);
printf("Enter age of patient:");
scanf("%d",&p[i].age);
printf("Enter ward number of patient:");
scanf("%d",&p[i].wn);
printf("Enter bed number of patient:");
scanf("%d",&p[i].bn);
printf("Enter nature of illnes of patient:");
scanf("%s",p[i].ni);
printf("Enter date of admission of patient:");
scanf("%d%d%d",&p[i].d[i].day,&p[i].d[i].month,&p[i].d[i].year);
}
printf("you have done:");
getch();
}

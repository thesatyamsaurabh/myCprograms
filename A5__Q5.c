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
char sex[10];
int age;
int wn;
int bn;
char ni[30];
struct date d[100];
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
scanf("%s",&p[i].sex);
printf("Enter age of patient:");
scanf("%d",&p[i].age);
printf("Enter ward number of patient:");
scanf("%d",&p[i].wn);
printf("Enter bed number of patient:");
scanf("%d",&p[i].bn);
printf("Enter nature of illness of patient:");
scanf("%s",p[i].ni);
printf("Enter date of admission of patient:");
scanf("%d%d%d",&p[i].d[i].day,&p[i].d[i].month,&p[i].d[i].year);
}
printf("        Displaying information you have entered:    ");
for(i=0;i<n;i++)
{
printf("Record of %d patient:\n",i+1);
printf("Name:%s.\n",p[i].name);
printf("Patient Code:%d.\n",p[i].code);
printf("Sex:%s\n",p[i].sex);
printf("Age:%d.\n",p[i].age);
printf("Ward number:%d.\n",p[i].wn);
printf("Bed number:%d.\n",p[i].bn);
printf("Nature of illness:%s.\n",p[i].ni);
printf("Date of admission:%d-%d-%d.\n",p[i].d[i].day,p[i].d[i].month,p[i].d[i].year);
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
struct student
{
int rollno;
char name[30];
float percentage;
}s;
printf("Enter roll no,name,percentage:");
scanf("%d\n%s\n%f",&s.rollno,s.name,&s.percentage);
printf("Display information:\n");
printf("Roll number:%d\n",s.rollno);
printf("Name:%s\n",s.name);
printf("Percentage:%f",s.percentage);
getch();
}

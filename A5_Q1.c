#include<stdio.h>
#include<conio.h>
struct student
{
char Name[50];
int roll;
float marks;
}s[5];
void main ()
{
int i;
printf("Enter information of student:\n");
for(i=0;i<5;i++)
{
s[i].roll=i+1;
printf("roll number %d\n",s[i].roll);
printf("Enter the name of student:");
scanf("%s",s[i].Name);
printf("Enter the marks of student:");
scanf("%f",&s[i].marks);
}
printf("Display information:\n");
for(i=0;i<5;i++)
{
printf("Roll number=%d.\t",i+1);
printf("Name of student:");
puts(s[i].Name);
printf("Marks:%f",s[i].marks);
printf("\n");
}
getch();
}

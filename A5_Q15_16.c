#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
char n[30];
int age;
};
void main()
{
struct student s[100];
FILE *fp;
int j,k,i=0,temp1,n;
fp=fopen("s_record.txt","w");
printf("Enter number of student:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
fflush(stdin);
printf("Enter details of %d student:",i+1);
printf("Enter Name and age:");
scanf("%s%d",s[i].n,&s[i].age);
fprintf(fp,"%s\t%d\n",s[i].n,s[i].age);
}
fclose(fp);
printf("Data stored successfully:");
getch();
}

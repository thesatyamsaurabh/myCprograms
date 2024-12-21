#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
char n[20];
int age;
};
void main()
{
struct student s[100];
int j,i,n,temp1;
char temp[20];
FILE *fp;
fp=fopen("s_record.txt","r");
printf("Number of student:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
fscanf(fp,"%s\t%d\n",s[i].n,&s[i].age);
printf("%s\t%d\n",s[i].n,s[i].age);
}
fclose(fp);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(strcmp(s[j].n,s[j+1].n)>0)
{
strcpy(temp,s[j].n);
temp1=s[j].age;
strcpy(s[j].n,s[j+1].n);
s[j].age=s[j+1].age;
strcpy(s[j+1].n,temp);
s[j+1].age=temp1;
}
}
}
printf("After sorting:\n");
for(i=0;i<n;i++)
printf("%s\t%d\n",s[i].n,s[i].age);
getch();
}

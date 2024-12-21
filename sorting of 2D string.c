#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,n,j,r;
char name[20][20],s[30];
printf("Enter the number of name:");
scanf("%d",&n);
printf("Enter the name:\n");
for(i=0;i<n;i++)
{
gets(name[i]);}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
 r=strcmp(name[j],name[j+1]);
 if(r>0)
 {
  strcpy(s,name[j]);
 strcpy(name[j],name[j+1]);
 strcpy(name[j+1],s);
}
}
}
printf("string in shorted order are :");
for(i=0;i<n;i++)
puts(name[i]);
getch();
}

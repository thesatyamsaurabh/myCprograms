#include<stdio.h>
#include<conio.h>
#include<string.h>
void ses(char[]);
void main()
{
char a[100];
printf("Enter your string:");
gets(a);
ses(a);
getch();
}
void ses(char a[])
{
char temp[100];
int i,j,l;
l=strlen(a);
for(j=0;j<l;j++)
{
for(i=0;i<l-1-j;i++)
{
if(a[i]>a[i+1])
{
temp[i]=a[i];
a[i]=a[i+1];
a[i+1]=temp[i];
}
}
}
printf("In alphabetical order:");
puts(a);
}

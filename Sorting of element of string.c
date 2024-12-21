#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],temp[100];
int i,j,l;
printf("Enter your string:");
gets(a);
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
puts(a);
getch();
}

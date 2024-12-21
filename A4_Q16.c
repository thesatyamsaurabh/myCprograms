#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[200],b[200];
int i=0,j=0;
printf("Enter your text:");
gets(a);
while(a[i]!='\0')
{
i++;
}
while(i>0)
{
b[j]=a[--i];
++j;
}
b[j]='\0';
printf("Reverse string:");
for(i=0;b[i]!='\0';i++)
{
if(b[i+1]==' '||b[i+1]=='\0')
{
for(j=i;j>=0&&b[j]!=' ';j--)
{
printf("%c",b[j]);
}
}
}
getch();
}

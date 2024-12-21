#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char b[4]="the",a[100],temp[100];
int k,r,c=0;
printf("Enter your text:");
gets(a);
for(k=0;a[k]!='\0';k++)
{
strncpy(temp,&a[k],3);
r=strcmp(b,temp);
if(r==0)
c++;
}
printf("Number of times the appear in the text=%d",c);
getch();
}

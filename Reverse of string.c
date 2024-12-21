#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i,l,swap;
printf("Enter a string:");
gets(str);
l=strlen(str);
for(i=0;i<l/2;i++)
{
swap=str[i];
str[i]=str[l-1-i];
str[l-1-i]=swap;
}
printf("Reverse of this string:%s",str);
getch();
}

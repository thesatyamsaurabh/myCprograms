#include<stdio.h>
#include<conio.h>
void main()
{
char str[25];
int i;
printf("Enter any string:");
scanf("%s",str);
for(i=0;i<=strlen(str);i++)
{
if(str[i]>=97&&str[i]<=122)
str[i]=str[i]-32;
}
printf("The string in upper case is:%s",str);
getch();
}

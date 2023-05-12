#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j;
char str1[200],str2[200];
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
i=strlen(str1);
for(j=0;str2[j]!='\0';i++,j++)
{
str1[i]=str2[j];
}
str1[i]='\0';
printf("Appended string is:%s",str1);
getch();
}

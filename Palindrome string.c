#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i,l;
printf("Enter the string:");
gets(str);
l=strlen(str);
 for(i=0;i<l/2;i++)
 {
 if(str[i]!=str[l-1-i])
 {
  printf("Not a palindrome");
  break;
 }
 }
 if(i==l/2)
 printf("Palindrome");
 getch();
 }

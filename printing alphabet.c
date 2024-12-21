#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("Enter a character");
ch=getchar();
if(ch>=65 && ch<=90)
printf("upper alphabet");
else if(ch>=97 && ch<=122)
printf("lower alphabet");
else if(ch>=48 && ch<=57)
printf("digits");
else
printf("special character");
getch();
return 0;
 }

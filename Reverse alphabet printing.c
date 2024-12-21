#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
char ch;
printf("Enter any character:");
ch=getchar();
if(ch>=65 && ch<=90)
{
ch=ch+32;
printf("%c is lower case character",ch);
}
else if(ch>=97 && ch<=122)
{
ch=ch-32;
printf("%c is upper case character",ch);
}
else
{
printf("%c is input character is not alphabet",ch);
}
getch();
return 0;
}

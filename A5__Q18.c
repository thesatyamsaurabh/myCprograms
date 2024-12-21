#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char s[100];
char ch;
FILE *fp;
fp=fopen("f4.txt","r");
printf("In lower case:");
do{
ch=fgetc(fp);
if(isupper(ch))
putc(tolower(ch),fp);
printf(" %c",ch+32);
}while(ch!=EOF);
fclose(fp);
getch();
}

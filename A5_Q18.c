#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
FILE *fp;
fp=fopen("f4.txt","w");
printf("Enter your string:");
gets(s);
fprintf(fp,"%s",s);
fclose(fp);
printf("data store in file successfully:");
getch();
}

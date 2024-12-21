#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
int i;
fp=fopen("f1.text","a");
ch=getchar();
while(ch!=EOF)
{
ch=fputc(ch,fp);
ch=getchar();
}
fclose(fp);
getch();
}

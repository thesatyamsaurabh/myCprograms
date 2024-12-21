#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
FILE *fp1,*fp2;
char c;
fp1=fopen("f1.text","r");
fp2=fopen("f3.txt","w");
while((c=fgetc(fp1))!=EOF)
{
if(islower(c))
putc(toupper(c),fp2);
}

printf("Successfully copied:");
fclose(fp1);
fclose(fp2);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp1,*fp2;
char c;
fp1=fopen("f1.text","r");
fp2=fopen("f2.text","w");
while((c=fgetc(fp1))!=EOF)
{
fputc(c,fp2);
}
fclose(fp1);
fclose(fp2);
printf("Successfully copied:");
getch();
}

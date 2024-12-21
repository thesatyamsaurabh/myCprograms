#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char c[52],temp;
int i,j,l;
FILE *fp;
fp=fopen("f4.txt","r");
fgets(c,52,fp);
printf("File contains=%s",c);
fclose(fp);
l=sizeof(c);
printf("\nSize of string=%d",l);
printf("\nAfter in reversing order:");
for(i=l-1;i>=0;i--)
{
printf("%c",c[i]);
}
getch();
}

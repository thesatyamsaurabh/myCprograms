#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char s[53],c[27];
int i=0,j=0;
fp=fopen("f4.txt","r");
fgets(s,53,fp);
printf("String contains:");
printf("%s",s);
fclose(fp);
while(s[i]!='\0')
{
if(s[i]!=' ')
{
c[j]=s[i];
j++;
}
i++;
}
printf("\nAfter removing spaces:");
printf("%s",c);
printf("\n5th character from end:%c",c[21]);
printf("\n5th character from begining:%c",c[4]);
getch();
}

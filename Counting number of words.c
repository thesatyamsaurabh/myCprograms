#include<stdio.h>
#include<conio.h>
void main()
{
char a[200];
int i,word=1;
printf("Enter your text:");
gets(a);
i=0;
while(a[i]!='\0')
{
if(a[i]==' ')
word++;
i++;
}
printf("Number of word=%d",word);
getch();
}

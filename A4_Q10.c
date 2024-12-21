#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[200];
int k,i,c=0,l=1,w=1;
printf("Enter your text:");
gets(a);
k=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
w++;
k--;
}
if(a[i]=='.')
l++;
}
printf("Number of character=%d.\n",k);
printf("Number of word=%d.\n",w);
printf("Number of line=%d.\n",l-1);
getch();
}

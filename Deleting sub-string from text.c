#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[200];
int k,l,i,e;
printf("Enter the text:");
gets(s);
printf("Enter the position from where deleting is start:");
scanf("%d",&k);
printf("Enter the length of sub-string to be deleted:");
scanf("%d",&e);
l=strlen(s);
if((k+e)>l)
{
printf("Invalid index:\n");
}
for(i=k+e;i<=l;i++)
{
s[i-e]=s[i];
}
printf("After deleting substring:%s",s);
getch();
}

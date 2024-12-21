#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[200],b[2],temp[2];
int i,r,c=0;
printf("Enter your text:");
gets(a);
printf("Enter your character to be count:");
gets(b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[0])
c++;
}
printf("Number of times '%s' occur in the text is %d.",b,c);
getch();
}

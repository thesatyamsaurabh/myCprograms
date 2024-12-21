#include<stdio.h>
#include<conio.h>
void main()
{
char  a[100];
int i=0,length;
printf("Enter the string:");
gets(a);
while(a[i]!='\0')
i++;
length=i;
printf("Length of string=%d",length);
getch();
}

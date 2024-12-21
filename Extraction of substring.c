#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100],sub[100];
int k,l;
printf("Enter the string:");
gets(str);
printf("Enter the position to start extraction:");
scanf("%d",&k);
printf("Enter the length of the sub-string:");
scanf("%d",&l);
strncpy(sub,&str[k],l);
sub[l]='\0';
printf("The extracted sub-string is: %s",sub);
getch();
}

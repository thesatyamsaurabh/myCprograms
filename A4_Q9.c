#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int l,j=0,i,k,e;
char a[100],r[100];
printf("Enter your text:");
gets(a);
printf("Enter the position from where replacement start:");
scanf("%d",&k);
printf("Enter the text:");
scanf("%s",&r);
l=strlen(r);
e=strlen(a);
for(i=k;i<=l+k;i++,j++)
{
a[i]=r[j];
}
a[l+e-1]='\0';
printf("After replacement:%s",a);
getch();
}

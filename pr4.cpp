#include<stdio.h>
#include<conio.h>
#include<string.h>
char pln(char []);
int main()
{
	char a[30],b;
	int l,i;
	printf("Enter your string:");
	gets(a);
	pln(a);
	return 0;
	getch();
}
char pln(char a[])
{
	int i,l;
	l=strlen(a);
    for(i=0;i<l/2;i++)
	{
    	if(a[i]!=a[l-i-1])
    	{
		printf("Not palindrome:");
    	break;
	}
	else
	printf("Palindrome:");
	}
	return 0;
}

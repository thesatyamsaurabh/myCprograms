#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char a[20][20];
	char *b[20][20];
	printf("Enter the number of names do you have:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(a[i]);j++)
		{
		b[i][j]=&a[i][j];
	}
}
	for(i=0;i<=n;i++)
	{
	puts(*b[i]);
    }
	return 0;
	getch();
    }

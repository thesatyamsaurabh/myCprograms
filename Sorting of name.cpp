#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20][20],t[20];
	int i,j,n,r;
	printf("Enter the number of names do you have:");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
{	
printf("Enter your %d name:",i+1);
	gets(a[i]);
}
   for(i=0;i<n-1;i++)
   {
   	for(j=0;j<n-1-i;j++)
   	{
   		r=strcmp(a[j],a[j+1]);
   		if(r>0)
   		{
   			strcpy(t,a[j]);
   			strcpy(a[j],a[j+1]);
   			strcpy(a[j+1],t);
		   }
	   }
   }
   printf("string in sorted order are:\n");
   for(i=0;i<n;i++)
   {
   	puts(a[i]);
   }
return 0;
getch();
}

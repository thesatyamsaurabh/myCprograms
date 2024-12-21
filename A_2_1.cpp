#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
 {
 	int i,j ,**a,**p,m,n;
 	printf("Enter the order of your matrix:");
 	scanf("%d%d",&m,&n);
 	a=(int **)malloc(m*sizeof(int *));
 	for(i=0;i<m;i++)
 	{
 	a[i]=(int*)malloc(n*sizeof(int));
	 }
printf("Enter the element of your matrix:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
p=a;
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d",p[i][j]);
	}
	printf("\n");
}
	for(i=0;i<m;i++)
	{
		free(a[i]);
	}
	free(a);
return 0;
getch();
  } 

#include<stdio.h>
int main()
{
	int m,n,i,j,d=0,a[10][10];
	printf("enter row and column");
	scanf("%d %d",&m,&n);
	printf("enter matrix element");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);		
		}
	}
	printf("left diagonal");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			printf("%d\n",a[i][j]);
		}
	}
	printf("right diagonal");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i+j)==m+1)
			printf("%d",a[i][j]);
		}
	}
}
	

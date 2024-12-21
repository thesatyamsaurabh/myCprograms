#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int **ptr,m,n,i,j,s=0,**p;
	printf("Enter the order of your matrix:");
	scanf("%d%d",&m,&n);
	//allocating memory for rows
	ptr=(int **)malloc(m *sizeof(int *));
	//allocating memory for column
	for(i=0;i<m;i++)
	ptr[i]=(int *)malloc(n * sizeof(int));
	printf("Enter the elements of your 2D array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&ptr[i][j]);
		}
	}
	p=ptr;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			s+=p[i][j];
		}
	}
	printf("Sum of elements of this array:%d",s);
	return 0;
	getch();
}

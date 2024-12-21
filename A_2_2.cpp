#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,m,n,**a,**b,**c;
	printf("Enter the order of your matrix:");
	scanf("%d%d",&m,&n);
	a=(int**)malloc(m*sizeof(int *));
	for(i=0;i<m;i++)
	{
		a[i]=(int *)malloc(n*sizeof(int));
	}
	b=(int**)malloc(m*sizeof(int *));
	for(i=0;i<m;i++)
	{
		b[i]=(int *)malloc(n*sizeof(int));
	}
	c=(int**)malloc(m*sizeof(int *));
	for(i=0;i<m;i++)
	{
		c[i]=(int *)malloc(n*sizeof(int));
	}
	
	printf("Enter the element of your  first matrix:");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
            scanf("%d",&a[i][j]);				
			}
		}
	int **p1;
	p1=a;
	printf("First matrix you have entered is:\n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
            printf(" %d",p1[i][j]);				
			}
			printf("\n");
		}
		printf("Enter the element of your second matrix:");
			for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
            scanf("%d",&b[i][j]);				
			}
		}
		int **p2;
		printf("Second matrix you have entered is:\n");
		p2=b;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
            printf(" %d",p2[i][j]);				
			}
			printf("\n");
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
              c[i][j]=p1[i][j]+p2[i][j];				
			}
		}
		printf("After addition:\n");
		int **p3;
		p3=c;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
            printf(" %d",p3[i][j]);				
			}
			printf("\n");
		}
		
	return 0;
	getch();
	}



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

	int **a,**b,i,j,m,n,k,**c;
	printf("Enter number of rows of first element:");
	scanf("%d",&m);
	printf("Enter number of columns of first and rows of second element:");
	scanf("%d",&n);
	printf("Enter the number of columns of second matrix:");
	scanf("%d",&k);
	a=(int **)malloc(m*sizeof(int *));
	for(i=0;i<m;i++)
	{
		a[i]=(int *)malloc(n*sizeof(int));
	}
	b=(int **)malloc(m*sizeof(int *));
	for(i=0;i<n;i++)
	{
		b[i]=(int *)malloc(k*sizeof(int));
	}
	c=(int **)malloc(m*sizeof(int *));
	for(i=0;i<m;i++)
	{
		c[i]=(int *)malloc(k*sizeof(int));
	}
	printf("Enter the element of first matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int **p1;
	p1=a;
	printf("Your First matrix is:\n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
            printf(" %d",p1[i][j]);				
			}
			printf("\n");
		}
printf("Enter element of second matrix:");
for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
			{
            scanf("%d",&b[i][j]);				
			}
		}
		int **p2;
		p2=b;
printf("Second matrix you have entered:\n");
for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
			{
            printf(" %d",p2[i][j]);				
			}
			printf("\n");
		}
		int d,r;
for(i=0;i<m;i++)
		{
			for(j=0;j<k;j++)
			{
				d=0;
				for(r=0;r<n;r++)
				{
            d+=p1[i][r]*p2[r][j];				
			}
			c[i][j]=d;
		}
	}
		int **p3;	
	 p3=c;
printf("After Multiplication:\n");
for(i=0;i<m;i++)
		{
			for(j=0;j<k;j++)
			{
            printf(" %d",p3[i][j]);				
			}
			printf("\n");
		}
return 0;
getch();
}

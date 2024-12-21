#include<stdio.h>
#include<conio.h>
int main()
{

	int a[20][20],b[20][20],i,j,m,n,k,c[20][20];
	printf("Enter number of rows of first element:");
	scanf("%d",&m);
	printf("Enter number of columns of first and rows of second element:");
	scanf("%d",&n);
	printf("Enter the number of columns of second matrix:");
	scanf("%d",&k);
	printf("Enter the element of first matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	int *p1;
	p1=&a[0][0];
	printf("Your First matrix is:\n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
            printf(" %d",*(p1+i*20+j));				
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
		int *p2;
		p2=&b[0][0];
printf("Second matrix you have entered:");
for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
            printf(" %d",*(p2+i*20+j));				
			}
			printf("\n");
		}
		int d;
for(i=0;i<m;i++)
		{
			for(j=0;j<k;j++)
			{
				int r;
				d=0;
				for(r=0;r<n;r++)
            d=d+*(p1+i*20+r)+*(p2+r*20+j);				
			}
			c[i][j]=d;
		}
	}
		//int *p3	
		// p2=&c[0][0]
printf("After Multiplication:");
for(i=0;i<m;i++)
		{
			for(j=0;j<k;j++)
			{
            printf(" %d",C[I][J];				
			}
			printf("\n");
		}
return 0;
getch();
}

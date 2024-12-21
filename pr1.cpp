#include<stdio.h>
#include<conio.h>
int mlt(int[20][20],int[20][20],int,int,int);
int i,j;
int main()
{
int a[20][20],b[20][20],m,n,k;
printf("Enter the row of your first matrix:");
scanf("%d",&m);
printf("Enter the column of first matrix and row of second matrix:");
scanf("%d",&n);
printf("Enter the column of second matrix:");
scanf("%d",&k);
printf("Enter element of your first matrix:");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("First matrix you have entered is:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d",a[i][j]);
	}
	printf("\n");
}
printf("Enter element of your second matrix:");
for(i=0;i<n;i++)
{
	for(j=0;j<k;j++)
	{
		scanf("%d",&b[i][j]);
	}
}

printf("Second matrix:\n");
for(i=0;i<n;i++)
{
	for(j=0;j<k;j++)
	{
		printf(" %d",b[i][j]);
	}
	printf("\n");
}
mlt(a,b,m,n,k);
	return 0;
getch();
}
int mlt(int a[20][20],int b[20][20],int m,int n,int k)
{
	int c[20][20],r,t;
for(i=0;i<m;i++)
{
	for(j=0;j<k;j++)
	{
		t=0;
		for(r=0;r<n;r++)
		{
			t=t+a[i][r]*b[r][j];
		}
		c[i][j]=t;
	}
}
printf("Resultant matrix:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<k;j++)
	{
		printf(" %d",c[i][j]);
	}
	printf("\n");
}
return 0;
}









#include<stdio.h>
#include<conio.h>
int lrg(int[20][20],int,int);
int i,j;
int main()
{
int a[20][20],m,n;
printf("Enter the number of rows and column of matrix:");
scanf("%d%d",&m,&n);
printf("Enter the element of your matrix:");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d",a[i][j]);
	}
	printf("\n");
}
lrg(a,m,n);
return 0;
getch();
}
int lrg(int a[20][20],int m,int n)
{
int max,smax;	
	max=a[0][0];
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		if(a[0][0]<a[i][j])
		a[0][0]=a[i][j];
	}
}
max=a[0][0];
printf("Largest element=%d\n",max);
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		if(a[i][j]<max)
		smax=a[i][j];
	}
}
printf("Second largest element =%d",smax);
return 0;
}








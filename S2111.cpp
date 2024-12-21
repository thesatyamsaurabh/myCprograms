#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,n,m;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the element of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position of element which you want to delete which is less than %d:",n-1);
	scanf("%d",&m);
	for(i=m-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf(" %d",a[i]);
	}
}

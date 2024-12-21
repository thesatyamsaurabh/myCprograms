#include<stdio.h>
int main ()
{
	int n,i,m,j;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the element of array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element you want to insert:");
	scanf("%d",&m);
	printf("Enter the position where you want to insert an element:");
	scanf("%d",&j);
	a[j]=m;
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	return 0;
}

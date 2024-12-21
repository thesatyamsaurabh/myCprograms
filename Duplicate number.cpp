#include<stdio.h>
#include<conio.h>
void ds(int *a,int);
int i;
int main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of your array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ds(a,n);
	getch();
	return 0;
}
void ds(int *a,int n)
{
	int *t,c=0,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;	
			}
		}
	}
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	for(i=0;i<n;i=i+c)
	{
		t=&a[i];
		c=0;
		for(j=i;j<n;j++)
		{
		if(*t==a[j])
			c++;
		}
		if(c>=2)
			printf("\nDuplicate number is %d:\n",*t);
		}
}

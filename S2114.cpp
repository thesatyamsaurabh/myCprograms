#include<stdio.h>
#include<conio.h>
void ex(int *a,int *b,int);
int i,j;
int main ()
{
	int t,c=0,k=0,n;
	printf("Enter the size of your array:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the element of your array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		    }
		}
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	ex(a,b,n);
	getch();
	return 0;
}
void ex(int *a,int *b,int n)
{
	int k=0,c=0;
	for(i=0;i<n;i++)
	{    
	     c++;
		if(a[0]==b[i])
		break;
	}
	for(i=0;i<n;i++)
	{
		k++;
		if(a[n-1]==b[i])
		break;
	}
	b[k-1]=a[0];
	b[c-1]=a[n-1];
	printf("\nAfter exchange:");
	for(i=0;i<n;i++)
		printf(" %d",b[i]);
	}


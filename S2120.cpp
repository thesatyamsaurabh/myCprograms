#include<stdio.h>
#include<conio.h>
void bs(int *a,int);
void is(int *a,int);
void ss(int *a,int);
int i,j,t;
int main ()
{
	int n,r;
	printf("Enter the size of your array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of your array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Choose the index for sorting:\n0:Bubble Sort\n1:Insertion Sort\n2:Selection Sort\n");
	scanf("%d",&r);
	switch(r)
	{
		case 0:
		bs(a,n);
		break;
		case 1:
		is(a,n);
		break;
		case 2:
		ss(a,n);
		break;
		default:
		printf("Invalid Choice:");
	}
	getch();
	return 0;
}
	void bs(int *a,int n)
	{
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
		printf(" %d",a[i]);
	}
void is(int *a,int n)
{
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0 && a[j]>t)
		{
		a[j+1]=a[j];
		j--;
		}
		a[j+1]=t;
	}
	printf("Elemnts in ascending order are:");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);	
}
void ss(int *a,int n)
{
	int pos;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i;j<n;j++)
		{
		if(a[pos]>a[j])
			pos=j;
		}
		t=a[i];
		a[i]=a[pos];
		a[pos]=t;
	}
	printf("Elements in ascending Order are:");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
}

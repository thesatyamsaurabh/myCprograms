#include<stdio.h>
#include<conio.h>
int bs(int *a,int,int);
int i;
int main ()
{
	int n,s,rs;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in sorted array:");
	for(i=0;i<n;i++)
                scanf("%d",&a[i]);
                printf("Enter the number for searching:");
               scanf("%d",&s);
               rs=bs(a,n,s);
                if(rs==-1)
                printf("Elements not present:");
                else
                printf("Elements present at %d position:",rs+1);
                getch();
                return 0;
}
int bs(int *a,int n,int s)
{
	int m,l=0,r=n-1;
	while(l<=r)
	{
		m=(l+r)/2;
		if(a[m]==s)
		return m;
		else if(a[m]<s)
		 l=m+1;
		else
		r=m-1;
	}
	return -1;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void usm(int *ptr1,int,int *ptr2,int);
void sm(int *ptr1,int,int *ptr2,int);
int i,j;
int main ()
{
	int m,n,*ptr1,*ptr2,r;
	printf("Enter the size of first array:");
	scanf("%d",&m);
	ptr1=(int *)malloc(m*sizeof(int));
	printf("Enter the element of first array:");
	for(i=0;i<m;i++)
	{
	scanf("%d",&ptr1[i]);
}
printf("Enter the size of Second array:");
scanf("%d",&n);
ptr2=(int *)malloc(n*sizeof(int));
printf("Enter the element of second array:");
for(i=0;i<n;i++)
{
	scanf("%d",&ptr2[i]);
}
printf("Enter 0 for unsorted merging and 1 for sorted merging:");
scanf("%d",&r);
switch(r)
{
case 0:
	 usm(ptr1,m,ptr2,n);
     break;
case 1:
	sm(ptr1,m,ptr2,n);
	break;
default:
		printf("invalid choice:"); 
		
}
	free(ptr1);
	free(ptr2);
	getch();
	return 0;
}
void usm(int *ptr1,int m,int *ptr2,int n)
{
	int *ptr3;
	ptr3=(int *)malloc((m+n)*sizeof(int));
for(i=0;i<m;i++)
{
 ptr3[i]=ptr1[i];
}
for(i=m;i<n+m;i++)
{
ptr3[i]=ptr2[i-m];
}
printf("After merging:");
for(i=0;i<(m+n);i++)
printf("%d ",ptr3[i]);
}
void sm(int *ptr1,int m,int *ptr2,int n)
{
	int *ptr3,temp;
	ptr3=(int *)malloc((m+n)*sizeof(int));
for(i=0;i<m;i++)
{
 ptr3[i]=ptr1[i];
}
for(i=m;i<n+m;i++)
{
ptr3[i]=ptr2[i-m];
}
for(i=0;i<(m+n)-1;i++)
{
	for(j=0;j<(m+n)-1-i;j++)
	{
		if(ptr3[j]>ptr3[j+1])
		{
			temp=ptr3[j];
			ptr3[j]=ptr3[j+1];
			ptr3[j+1]=temp;
		}
	}
}
printf("After sorted merging:");
for(i=0;i<(m+n);i++)
{
	printf(" %d",ptr3[i]);
}
}

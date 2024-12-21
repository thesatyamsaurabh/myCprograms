#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i,*p;
	printf("Enter the no elements in array:");
	scanf("%d",&n);
ptr=(int *)malloc(n * sizeof(int));
printf("Enter the elements of your array:");
for(i=0;i<n;i++)
	scanf("%d",&ptr[i]);
p=&ptr[n-1];
printf("\nAfter reversing:");
for(i=n-1;i>=0;i--)
	printf(" %d",*p--);
free(ptr);
return 0;
getch();
}

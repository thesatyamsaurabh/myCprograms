#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	int i,n,*ptr,*p,g;
	printf("Enter number of elements in your array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&ptr[i]);
	g=ptr[0];
	p=ptr;
	for(i=0;i<n;i++)
	{
	if(g<(*p))
		g=ptr[i];
		p++;
	}
	printf("Largest element:%d",g);
	int s=ptr[0];
	p=ptr;
	for(i=0;i<n;i++)
	{
		if(s<(*p) && (*p)<g) 
		s=ptr[i];
		p++;
	}
	printf("\nSecond Largest element is:%d",s);
	for(i=0;i<n;i++)
{
		if(s==ptr[i])
		{
	printf("\nIndex of Second Largest is:%d\n",i);
	break;
}
}
    return 0;
	getch();
	}

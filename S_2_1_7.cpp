#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n,l,*p;
	printf("Enter the size of your array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the element of your array:");
    for(i=0;i<n;i++)
    scanf("%d",&ptr[i]);
    l=ptr[0];
    p=&ptr[0];
    for(i=0;i<n;i++)
    {
    	if(l>(*p))
    	l=*p;
    	p++;
	}
	printf("Smallest element=%d\n",l);
	for(i=0;i<n;i++)
	{
		if(l==ptr[i])
		{
		printf("Index of smallest element is:%d",i);
			break;
	}
	
	}
	getch();
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i,j,k,*ptr3;
int main ()
{
	int m,*ptr,c;
	printf("Enter the size of array:");
	scanf("%d",&m);
	ptr=(int *)malloc(m*sizeof(int));
	printf("Enter the element of array:");
	for(i=0;i<m;i++)
	{
	scanf("%d",&ptr[i]);
    }
    for(i=0;i<m;i++)
    {
        c=1;
        int a=ptr[i];
        for(j=i+1;j<m;j++)
        {
            if(ptr[j]==a)
            c++;
        }
        if(c==2)
        printf("%d appears two times.\n",a);
    }

	free(ptr);
	getch();
	return 0;
}

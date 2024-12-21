#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int i,j ,a[30][30],(*p)[30],m,n;
 	printf("Enter the order of your matrix:");
 	scanf("%d%d",&m,&n);
printf("Enter the element of your matrix:");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
p=&a[0];
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d",*(*(a+i)+j));
	}
	printf("\n");
}
return 0;
getch();
  } 

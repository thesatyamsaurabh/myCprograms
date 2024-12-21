#include<stdio.h>
#include<conio.h>
int main ()
{
	int A[2][3][4]={{1,2,3,4,10,11,12,13,20,21,22,23},{30,31,32,33,40,41,42,43,50,51,52,53}};
	int i,j,k;
	 int(*pA) [3] [4]=A;
	 
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)
			{
				printf("%d\t",*(*(*(pA+i)+j)+k));
			}
			printf("\n");
		}
		printf("\n");
	}
	getch();
	return 0;
	}

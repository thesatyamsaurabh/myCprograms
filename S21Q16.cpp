#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,j,a[5][3],t;
	for(i=0;i<5;i++)
	{
		printf("\tEnter the marks of student %d:\n",i+1);
		for(j=0;j<3;j++)
		{
			printf("Enter the marks of subject %d:",j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{    
    	t=a[0][j];
		for(i=0;i<5;i++)
		{
		if(t<a[i][j])
		t=a[i][j];
		}
		printf("\t\tHighest marks in subject %d is %d:\n",j+1,t);
    }
    getch();
    return 0;
}

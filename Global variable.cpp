#include<stdio.h>
#include<conio.h>
int exchange(int,int);
int x,y;
int main()
{
	printf("Enter two number:");
	scanf("%d%d",&x,&y);
	printf("x=%d\ny=%d",x,y);
	exchange(x,y);
	return 0;
	getch();
}
int exchange(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping:");
	printf("\nx=%d\ny=%d",x,y);
	return 0;
}
